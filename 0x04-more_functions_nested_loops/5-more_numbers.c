#include "main.h"

/**
 * more_numbers - Prints the numbers 1 to 14 x10
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int num;

		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');

		count++;
	}
}
