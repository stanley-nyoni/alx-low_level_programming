#include "main.h"

/**
* print_err - prints error messages
* @fd: array of file descriptors
* @av: array of file names
*
* Return: void
*/

void print_err(int fd[], char **av)
{
	if (fd[0] < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (fd[1] < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

}

/**
* main - entry point
* @ac: array count
* @av: array of args
*
* Return: 0 on success
*/

int main(int ac, char **av)
{
	int fd[2];
	ssize_t r_chars, w_chars;
	char buff[1024];


	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd[0] = open(av[1], O_RDONLY);
	fd[1] = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	print_err(fd, av);

	r_chars = read(fd[0], buff, 1024);
	if (r_chars < 0)
	{
		close(fd[0]);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	w_chars = write(fd[1], buff, r_chars);
	if (w_chars < 0 && w_chars != r_chars)
	{
		close(fd[1]);
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	if (close(fd[0]) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd[0]);
		exit(100);
	}
	if (close(fd[1]) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd[1]);
	}
	return (0);
}
