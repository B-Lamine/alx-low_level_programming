#include <stdio.h>

/**
 * main - prints numbers from 1 to 100,
 * multiples of 3 are printed the word "Fuzz" instead,
 * multiples of 5 are printed the word "Buzz" instead,
 * multiples of both 3 and 5 are printed "FuzzBuzz" instead.
 *
 * Return: 0 if code successful.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz ");
			else if (i % 3 == 0)
				printf("Fizz ");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
