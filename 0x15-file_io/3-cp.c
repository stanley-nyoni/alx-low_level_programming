#include "main.h"

/**
* print_err - prints the error message
* @file_from: file from
* @file_to: file to
* @av: array of arguments
*
* Return: void
*/

void print_err(int file_from, int file_to, char **av)
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
* @ac: args count
* @av: array of args
*
* Return: 0
*/

int main(int ac, char **av)
{
	int file_from, file_to, close_err;
	ssize_t r_chars, w_chars;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_err(file_from, file_to, av);

	r_chars = 1024;
	while (r_chars == 1024)
	{
		r_chars = read(file_from, buf, 1024);
		if (r_chars < 0)
			print_err(-1, 0, av);
		w_chars = write(file_to, buf, r_chars);
		if (w_chars < 0)
			print_err(0, -1, av);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
