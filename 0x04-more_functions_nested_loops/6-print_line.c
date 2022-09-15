#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: This toggles the amount of line drawn
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
