#include <unistd.h>

/**
 *
 * main - prints str "putchar" to stdout.
 *
 * Return: 0 when code successful.
 */

int main(void)
{
	write(1, "_putchar", 8);
	return (0);
}
