#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

/**
* read_textfile - reads a text file and prints it to the POSIXtandard output
* @filename: name of the file to read.
* @letters: number of letters to read and print.
* Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_bytes, written_bytes;

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
	read_bytes = read(fd, buffer, letters);
	close(fd);
	if (read_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	free(buffer);

	if (read_bytes != written_bytes)
		return (0);

	return (written_bytes);
}
