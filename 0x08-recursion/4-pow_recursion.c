#include "main.h"

/**
 * _pow_recursion - Prints a value raised to power
 * @x: The value to raised
 * @y: The Power of value x
 *
 * Return: The powered value or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
