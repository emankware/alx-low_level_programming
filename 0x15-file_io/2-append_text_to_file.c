#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to file name.
 * @text_content: added content.
 * Return: 1 on success and the file exists,-1 on failure or filename is NULL
 * -1 if the file does not exist or without permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count_len;
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (count_len = 0; text_content[count_len]; count_len++)
			;
		w = write(fd, text_content, count_len);

		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
