#include "main.h"

/**
 * _sqrt_recursion - Prints the natural square root of a number
 * @n: The Number
 *
 * Return: The Natural quare root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion(n * (1/2)));
}
