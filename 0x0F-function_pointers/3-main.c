#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - checks operation feasability and calls appropriate function.
  * @argc: number of arguments,
  * @argv: array of inputs.
  * Return: always 0.
  */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*operation)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	printf("here\n");
	if (operation == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(n1, n2);
	printf("%d\n", result);
	return (0);
}
