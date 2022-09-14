#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Prints the last digit of the parameter
 * @n: The parameter of the function print_last_digit
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int lastdigit = abs(n) % 10;

	if (lastdigit < 0)
	{
		lastdigit = -1;
	}

	_putchar(lastdigit + '0');

	return (lastdigit);
}
