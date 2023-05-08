#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads and print to stdout @letters number of characters from
 * @filename file.
 * @filename: address of the file,
 * @letters: number of characters to read and print.,
 * Return: number of characters that are read, or 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read, bytes_print;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(letters) * letters);
	if (buf == NULL)
		return (0);
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);
	bytes_print = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_print != bytes_read)
		return (0);
	free(buf);
	close(fd);
	return (bytes_print);
}
