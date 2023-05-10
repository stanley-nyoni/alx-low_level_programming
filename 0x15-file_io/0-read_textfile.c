#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the STDOUT_FILENO
*@filename: name of the file to read
*@letters: atual number of letters it could read and print
*
* Return: number of letters it could read and print,
* 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t r_chars, w_chars;

	if (filename == NULL)
		return (0);

	c = (char *) malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	r_chars = read(fd, c, letters);
	if (r_chars < 0)
	{
		free(c);
		close(fd);
		return (0);
	}

	w_chars = write(STDOUT_FILENO, c, r_chars);
	if (w_chars < 0 || w_chars != r_chars)
	{
		free(c);
		close(fd);
		return (0);
	}

	free(c);
	close(fd);
	return (r_chars);
}
