#include "main.h"

/**
  * _pow - computes @a to the power @b.
  * @a: base number.
  * @b: exponent.
  *
  * Return: result.
  */
int _pow(int a, int b)
{
	int i, res;

	res = 1;
	i = 0;
	while (i < b)
	{
		res = res * a;
		i++;
	}
	return (res);
}

/**
  * _atoi - extracts a number from a given string, taking into account previos
  * changes of its sign.
  * @s: input string.
  *
  * Return: integer, if found, otherwise 0.
  */
int _atoi(char *s)
{
	int i, j, sign, num, n, tmp;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			n = 0;
			while (*(s + i) >= '0' && *(s + i) <= '9')
			{
				n++;
				i++;
			}
			sign = 1;
			j = 0;
			while (j < (i - n))
			{
				if (*(s + j) == '-')
					sign = -1 * sign;
				j++;
			}
			num = 0;
			j = 0;
			while (j < n)
			{
				i--;
				tmp = (int) *(s + i);
				num = num + ((tmp - 48) * _pow(10, j));
				j++;
			}
			return (num * sign);
		}
		i++;
	}
	return (0);
}
