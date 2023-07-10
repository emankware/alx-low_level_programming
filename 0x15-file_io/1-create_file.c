#include "main.h"

/**
* create_file - function that creates a file.
* @filename: the name of the file to create.
* @text_content: a NULL terminated string to write to the file.
* Return: 1 on success and -1 if error.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int no_of_letter = 0;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[no_of_letter])
		no_of_letter++;

	rwr = write(fd, text_content, no_of_letter);

	if (rwr == -1)
		return (-1);

	close(fd);
	return (1);
}
