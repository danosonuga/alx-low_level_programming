#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: The string to be printed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int n;
	for (n = 62; n >= 0; n--)
	{
		_putchar(*(s + n));
	}
	_putchar('\n');
}
