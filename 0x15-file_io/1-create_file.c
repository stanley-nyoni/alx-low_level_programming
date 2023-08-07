#include "main.h"

/**
* create_file - creates a file
* @filename: name of file to be created
* @text_content: null terminated string
*
* Return: 1 success, -1 failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t w_chars;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	len = 0;
	while (text_content[len] != '\0')
		len++;

	w_chars = write(fd, text_content, len);
	if (w_chars < 0)
		return (-1);

	return (1);
}
