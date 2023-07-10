#include "main.h"

/**
* create_file - creates a file
* @filename: pointer to the file name
* @text_content: string to be written into the new file
*
* Return: 1 on success,
* -1 on failure(can't create file,write fails)
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t w_chars;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0600);
	if (fd < 0)
		return (-1);

	len = strlen(text_content);
	w_chars = write(fd, text_content, len);
	if (w_chars < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
