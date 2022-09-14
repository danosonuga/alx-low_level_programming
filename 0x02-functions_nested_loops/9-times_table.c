#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int row = 0;

	while (row < 10)
	{
		_putchar(row + '0');
		_putchar(',');
		int col = 0;
		int val = row * col;

		while (col < 10)
		{
			_putchar(" ");
			_putchar(" ");
			_putchar(val + '0');
			_putchar(",");
			
			col++;
		}
		row++;
	}
}
