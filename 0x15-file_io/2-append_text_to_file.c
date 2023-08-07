#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of file
* @text_content: null terminated string
*
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t w_chars;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		w_chars = write(fd, text_content, len);
		if (w_chars < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
