#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

/**
* read_textfile - reads a text file and prints it to the POSIXtandard output
* @filename: name of the file to read.
* @letters: the maximum number of letters to read and print.
* Return: the no of bytes printed to std output or 0 if an error occurred
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/* file descriptor */
	char *buffer;/* buffer to store text */
	ssize_t num_read, num_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	num_read = read(fd, buffer, letters);
	close(fd);
	if (num_read == -1)
	{
		free(buffer);
		return (0);
	}
	num_written = write(STDOUT_FILENO, buffer, num_read);
	free(buffer);

	if (num_read != num_written)
		return (0);

	return (num_written);
}
