#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: pointer to a file name
* @text_content: string to append to file
*
* Return: 1 on success,
* -1 on any failure(file doesn't exist,)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t a_chars;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}
	a_chars = write(fd, text_content, len);
	if (a_chars < 0 && a_chars < len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
