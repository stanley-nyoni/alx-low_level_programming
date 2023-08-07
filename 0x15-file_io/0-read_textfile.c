#include "main.h"

/**
* read_textfile - reads a textfile and prints it to stdout
* @filename: name of file to be read
* @letters: number of letters to be read
*
* Return: actual number it could read, success
* 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_chars, w_chars;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	r_chars = read(fd, buffer, letters);
	if (r_chars < 0)
		return (0);
	w_chars = write(STDOUT_FILENO, buffer, r_chars);
	if (w_chars < 0 || w_chars != r_chars)
		return (0);

	close(fd);
	free(buffer);

	return (r_chars);
}
