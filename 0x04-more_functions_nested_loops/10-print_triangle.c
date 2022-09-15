#include "main.h"

/**
 * print_triangle - Prints triangle based on parameter
 * @size: The parameter value
 */
void print_triangle(int size)
{
	int count, j, num = size - 1;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < num)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			num--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
