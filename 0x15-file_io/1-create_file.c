#include "main.h"

/**
* create_file - creates a file.
* @filename: name of the file to create.
* @text_content: pointer to string to be written.
* Return: 1 on success and -1 if otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[len])
		len++;

	w = write(fd, text_content, len);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
