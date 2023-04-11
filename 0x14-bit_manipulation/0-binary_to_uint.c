#include "main.h"
#include <stddef.h>

/**
  * _strlen - counts the number of characters in a string.
  * @s: pointer to an array of characters.
  *
  * Return: length of the string.
  */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
  * _pow - computes @ to the power @e;
  * @a: base integer,
  * @e: exponent,
  * Return: the product.
  */
unsigned int _pow(int a, int e)
{
	int power;

	power = 1;
	while (e > 0)
	{
		power = power * a;
		e--;
	}
	return ((unsigned int) power);
}

/**
  * binary_to_uint - converts a given string of 0's and 1's into a decimal
  * number.
  * @b: pointer to the string.
  * Return: the decimal number, or 0 if the string contains non-binary digits
  * or the pointer is NULL..
  */
unsigned int binary_to_uint(const char *b)
{
	int i, len, order, decimal_number, digit;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	order = len - 1;
	decimal_number = 0;
	i = 0;
	while (*(b + i) != '\0')
	{
		digit = *(b + i) - '0'; 
		if (digit != 0 && digit != 1)
			return (0);
		decimal_number = decimal_number + digit * _pow(2, order);
		order--;
		i++;
	}
	return ((unsigned int) decimal_number);
}
