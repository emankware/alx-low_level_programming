#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the filename
 * @text_content: the added content
 * Return:  if the file exists, - if error or file doesn't  exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int counter;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (counter = 0; text_content[counter]; counter++)
			;
		rwr = write(fd, text_content, counter);

		if (rwr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
