#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
* print_address - prints the address
* @ptr: pointer
*
* Return: void
*/

void print_address(char *ptr)
{
	int i, begin;
	char sys;

	printf("  Entry point address:               0x");
	sys = ptr[4] + '0';
	if (sys == '1')
	{
		begin = 26;
		printf("80");
		for (i = begin; i >= 22; i--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%x", 256 + ptr[i]);
		}
		if (ptr[7] == 6)
			printf("00");
	}
	if (sys == '2')
	{
		begin = 26;
		for (i = begin; i > 23; i--)
		{
			if (ptr[i] >= 0)
				printf("%02x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%02x", ptr[i]);
		}
	}
	printf("\n");
}

/**
* print_typ - prints the type
* @ptr: pointer
*
* Return: void
*/

void print_typ(char *ptr)
{
	char typ = ptr[16];

	if (ptr[5] == 1)
		typ = ptr[16];
	else
		typ = ptr[17];
	printf("  Type:                              ");
	if (typ == 0)
		printf("NONE (No file type)\n");
	else if (typ == 1)
		printf("REL (Relocatable file)\n");
	else if (typ == 2)
		printf("EXEC (Executable file)\n");
	else if (typ == 3)
		printf("DYN (Shared object file)\n");
	else if (typ == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", typ);
}

/**
* print_osabi - prints the osabi
* @ptr: pointer
*
* Return: void
*/

void print_osabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", ptr[8]);

}

/**
* print_version - prints the version
* @ptr: pointer
*
* Return: void
*/

void print_version(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);
	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}


/**
* print_data - prints the actual data
* @ptr: pointer
*
*Return: void
*/

void print_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}

/**
* print_magic - print info about magic
* @ptr: pointer
*
* Return: void
*/

void print_magic(char *ptr)
{
	int tmp;

	printf("  Magic:  ");

	for (tmp = 0; tmp < 16; tmp++)
	{
		printf(" %02x", ptr[tmp]);
	}
	printf("\n");
}


/**
* check_sys - check the version of the system
* @ptr: pointer
*
* Return: void
*/
void check_sys(char *ptr)
{
	char sys = ptr[4] + '0';

	if (sys == '0')
	{
		exit(98);
	}

	printf("ELF Header:\n");
	print_magic(ptr);

	if (sys == '1')
	{
		printf("  Class:                             ELF32\n");
	}
	if (sys == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_typ(ptr);
	print_address(ptr);

}


/**
* check_elf - check if it's an elf file
* @ptr: pointer
*
* Return: 1 if elf
* otherwise: 0
*/

int check_elf(char *ptr)
{
	int address = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (address == 127 && E == 'E' && L == 'L' && F == 'F')
	{
		return (1);
	}
	return (0);
}

/**
* main - entry point
* @ac: argument count
* @av: array of arguments
*
* Return: 0 success
*/

int main(int ac, char **av)
{
	int fd, r_chars;
	char ptr[27];

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	r_chars = read(fd, ptr, 27);
	if (r_chars == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	check_sys(ptr);
	close(fd);
	return (0);
}
