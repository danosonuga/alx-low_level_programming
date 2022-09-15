#include "main.h"

/**
 * print_diagonal - Print the backward slash the number of parameter times
 * @n: The parameter to be calculated
 */
void print_diagonal(int n)
{
	int count, r;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (r = 0; r < count; r++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
