#include "main.h"

/**
* print_error - check if the file can be opened
* @file_from: file_from
* @file_to: file_to
* @av: array of arguments
*
* Return: void
*/

void print_error(int file_from, int file_to, char **av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
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
	int file_from, file_to, error_close;
	ssize_t r_chars, w_chars;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_error(file_from, file_to, av);
	r_chars = 1024;
	while (r_chars == 1024)
	{
		r_chars = read(file_from, buff, 1024);
		if (r_chars == -1)
			print_error(-1, 0, av);
		w_chars = write(file_to, buff, r_chars);
		if (w_chars == -1)
			print_error(0, -1, av);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
