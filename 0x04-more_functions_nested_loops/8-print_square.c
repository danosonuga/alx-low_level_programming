#include "main.h"

/**
 * print_square - Prints a squae based on the input using #
 * @size: The parameter of print_square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int count, j;

		for (count = 0; count < size; count++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
