#include "main.h"

/**
 * print_most_numbers - Prints all numbers except 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2)
		{
			continue;
		}
		else if (num == 4)
		{
			continue;
		}
		_putchar(num + '0');
	}
	_putchar('\n');
}
