#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - returns stderr to stdo
 *
 * Return: 1
 */
int main(void)
{
	system("echo $(hello world!) >2 2&>1");
	return (1);
}
