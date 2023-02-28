int _strlen(char *s);

/**
  * _strlen - counts length of the string.
  * @s: string.
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
  * rev_string - reverses a string of characters.
  * @s: address to the string.
  */
void rev_string(char *s)
{
	int i, len = _strlen(s);
	char s_tmp[10];

	i = 0;
	while (i < len)
	{
		s_tmp[i] = *(s + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(s + i) = s_tmp[len - i - 1];
		i++;
	}
}
