#include <stdio.h>

/**
  * main - prints name of the executable file.
  * @argc: number of arguments passed to the program.
  * @argv: an array of arguments passed to the program.
  * Return: 0 if code successful.
  */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
