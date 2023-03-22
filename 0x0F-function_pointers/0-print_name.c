#include "function_pointers.h"

/**
  * print_name - calls back given function with given string as argument.
  * @name: string.
  * @f: pointer to function.
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
