#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints sequence of any number of given strings.
  * @separator: string separating inputs,
  * @n: number of given arguments.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(ap, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
