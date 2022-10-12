#include "function_pointers.h"

/**
 * print_name - Prints a name given
 * @name: the name parameter
 * @f: the pointer to a funtion
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
