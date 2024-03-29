

#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints the name of the file
 * @name: name to be printed
 * @f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
