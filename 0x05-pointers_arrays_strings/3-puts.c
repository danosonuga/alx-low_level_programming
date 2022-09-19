#include "main.h"

/**
 * _puts - Prints a string, followed by a new line
 * @str: string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');
}
