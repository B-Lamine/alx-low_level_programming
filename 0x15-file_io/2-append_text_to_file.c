#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
  * _strlen - counts the number of characters in a string.
  * @s: pointer to an array of characters.
  *
  * Return: length of the string.
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
  * append_text_to_file - append text to a file if it exists.
  * @filename: pointer to address of file,
  * @text_content: text to append to file.
  * Return: 1 if successful, -1 otherwise.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes_check;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
