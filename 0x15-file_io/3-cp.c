#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * error - prints error to stdout in case file read fails.
  * @filename: pointer to address of file,
  * @exit_n: exit status number.
  */
void error(char *filename, int exit_n)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(exit_n);
}

/**
  * close_error - prints error to stdour in case file close fails.
  * @fd: file descriptor.
  */
void close_error(int fd)
{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
}

/**
  * main - copies content from file1 to file2 (creating file2 if it doesn't
  * exist)
  * @ac: number of arguments,
  * @av: arguments.
  * Return: 1 if successful.
  */
int main(int ac, char *av[])
{
	int fd_to, fd_from, bytes_check, n;
	char *buf[BUFSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error(av[1], 98);
	fd_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
		error(av[2], 99);
	n = BUFSIZE;
	while (n > 0)
	{
		n = read(fd_from, buf, BUFSIZE);
		if (n == -1)
			error(98);
		bytes_check = write(fd_to, buf, n);
		if (bytes_check != n)
			error(99);
	}
	close(fd_from);
	if (fd_from == -1)
		close_error(fd_from);
	close(fd_to);
	if (fd_to == -1)
		close_error(fd_to);
	return (1);
}
