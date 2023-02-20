#include <stdio.h>

/**
 * main - print sizes of different types of variables
 *
 * Return: 0 for successful code
 */
int main(void)
{
	int i;
	long int j;
	long long int k;
	char c;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(j));
	printf("Size of a long long int: %i byte(s)\n", sizeof(k));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
