#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - prints any number of input formatted according to given string.
  * @format: string of characters for formatting input.
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int j;
	char t;
	char *s;

	va_start(ap, format);
	j = 0;
	while (*(format + j) != '\0')
	{
		t = *(format + j);
		if (t == 'c')
			printf("%c", va_arg(ap, int));
		else if (t == 'i')
			printf("%d", va_arg(ap, int));
		else if (t == 'f')
			printf("%f", va_arg(ap, double));
		else if (t == 's')
		{
			s = va_arg(ap, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");

		}
		else
		{
			j++;
			continue;
		}
		j++;
		while (*(format + j) != '\0')
		{
			printf(", ");
			break;
		}
	}
	printf("\n");
	va_end(ap);
}
