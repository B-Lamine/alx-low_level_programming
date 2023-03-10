#include <stdio.h>
#include <stdlib.h>

/**
  * main - computes and dislays sum of input numbers.
  * @argc: number of inputs.
  * @argv: input integers.
  *
  * Return: 0 if code successful, 1 otherwise.
  */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
