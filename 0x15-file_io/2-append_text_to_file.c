#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* append_text_to_file - appends text at the end of the file
*@filename: name of file
*@text_content: string to be appended
*
* Return: 1 on success
* -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_chars;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	w_chars = write(fd, text_content, len);
	if (w_chars < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
