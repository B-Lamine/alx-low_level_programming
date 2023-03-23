#include "3-calc.h"
#include <stddef.h>

/**
  * get_op_func - performs adequate operation on given integers.
  * @s: operation symbol,
  * Return: operation.
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (i < 6)
	{
		if (*(ops + i)->op == *s)
			return (*(ops + i)->f);
		i++;
	}
	return (NULL);
}
