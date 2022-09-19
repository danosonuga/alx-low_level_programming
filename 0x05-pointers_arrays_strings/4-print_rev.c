#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: The string to be printed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i, n;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	_putchar(j);

	for (n = (j - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
