#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - creates a file
*@filename: name of file to be created
*@text_content: string to be written into a new file
*
* Return: 1 on success
* -1, on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w_chars;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}

	w_chars = write(fd, text_content, len);
	if (w_chars < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
