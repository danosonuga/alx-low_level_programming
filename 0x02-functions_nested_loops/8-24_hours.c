#include "main.h"

/**
 * jack_bauer - Prints every minues of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hours = 0, minutes;

	while (hours < 24)
	{
		minutes = 0;

		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');

			minutes++;
		}

	}
}
