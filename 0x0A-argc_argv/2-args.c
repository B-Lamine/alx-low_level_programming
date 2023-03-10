#include <stdio.h>

/**
  * main - prints arguments passed to the program.
  * @argc: number of arguments.
  * @argv: the arguments.
  *
  * Return: 0 if code successful.
  */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
