#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
* main - copy content of  a file to another file
*@argc: argument count
*@argv: array of args passed to main
*
* Return: 1 on success, -1 on failure
*/
int main(int argc, char *argv[])
{
	int fd[2];
	int w_chars, r_chars;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd[0] = open(argv[1], O_RDONLY);
	r_chars = 1024;
	while (r_chars == 1024)
	{
		r_chars = read(fd[0], buffer, 1024);
		if (fd[0] < 0 || r_chars < 0 || !(argv[1]))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		fd[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
		w_chars = write(fd[1], buffer, strlen(buffer));
		if (fd[1] < 0 || w_chars < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd[0]) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[0]);
		exit(100);
	}
	if (close(fd[1]) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[1]);
		exit(100);
	}
	return (0);
}
