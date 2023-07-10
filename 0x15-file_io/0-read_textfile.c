#include "main.h"

/**
* read_textfile - reads a text file and prints
* it to the POSIX stdout
*
* @filename: pointer to the filename
* @letters: number of letters to read & print
*
* Return: no. of letters read & printed on success,
* 0 on any failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t r_chars, w_chars;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	buff = (char *)malloc(sizeof(char) * letters);
	r_chars = read(fd, buff, letters);

	if (r_chars < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}
	w_chars = write(STDOUT_FILENO, buff, r_chars);

	if (w_chars < 0 && w_chars != r_chars)
	{
		close(fd);
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);

	return (w_chars);

}
