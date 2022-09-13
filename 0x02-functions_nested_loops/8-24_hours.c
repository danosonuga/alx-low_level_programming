#include "main.h"

/**
 * jack_bauer - Prints every minues of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour = 0, minutes = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar((hours/10) + '0');
			_putchar((hours%10) + '0');
			_putchar(':');
			_putchar((minutes/10) + '0');
			_putchar((minutes%10) + '0');

			minutes++;
		}

	}
}