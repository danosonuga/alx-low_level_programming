#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int row = 0, val;

	while (row < 10)
	{
		int col = 1;

		_putchar(0 + '0');
		_putchar(',');

		while (col < 10)
		{
			val = col * row;

			_putchar(' ');
			_putchar(' ');

			if (val <= 9)
			{
				_putchar(val + '0');
			}
			else
			{
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			}

			if (col != 9)
			{
				_putchar(',');
			}

			col++;
		}
		_putchar('\n');
		row++;
	}
}
