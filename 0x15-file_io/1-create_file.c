#include "main.h"

/**
 * _strlen - counts the number of characters in a string.
 * @s: string address.
 * Return: length of the string, terminating byte excluded.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * create_file - creates @filename file, or overwrites existing one.
 * @filename: address of the file.
 * @text_content: string to write to file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes_check;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		bytes_check = write(fd, text_content, len);
		if (bytes_check != len)
			return (-1);
	}
	close(fd);
	return (1);
}
