#include "main.h"

/**
 * print_sign - Prints the sign of the value entered
 * @n: A parameter of an Integer data type
 *
 * Return: Return +, 0 or -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
