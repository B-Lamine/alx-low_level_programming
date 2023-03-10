#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the product of two integers.
  * @argc: number of arguments.
  * @argv: arguments.
  *
  * Return: 0 if code successful, or 1 if no arguments are passed.
  */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc > 3)
	{
		printf("Error \n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", (a * b));
	return (0);
}
