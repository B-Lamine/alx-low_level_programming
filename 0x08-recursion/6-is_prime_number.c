#include "main.h"

/**
  * is_prime - checks if number is a prime.
  * @n: initial integer.
  * @x: divisor.
  *
  * Return: 1 if number is prime, 0 otherwise.
  */
int is_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	x--;
	return (is_prime(n, x));
}

/**
  * is_prime_number - checks if number is prime.
  * @n: initial integer.
  *
  * Return: 1 if number is prime, 0 otherwise.
  */
int is_prime_number(int n)
{
	int x;

	if (n <= 1)
		return (0);
	x = n / 2;
	return (is_prime(n, x));
}
