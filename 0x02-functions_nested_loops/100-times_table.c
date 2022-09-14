#include "main.h"

/**
 * print_times_table - Prints the timetable with inputted value
 * @n: Use the value n to print the table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row = 0, val;

		while (row <= n)
		{
			int col = 1;

			_putchar(0 + '0');
			_putchar(',');

			while (col <= n)
			{
				val = col * row;

				if (val <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(val + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((val / 10) + '0');
					_putchar((val % 10) + '0');
				}
				if (col != (n - 1))
				{
					_putchar(',');
				}
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
}