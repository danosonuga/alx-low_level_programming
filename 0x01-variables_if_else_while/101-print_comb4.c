#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description -compute to combination of 3-digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hunds;
	int tens;
	int ones;

	for (hunds = 0; hunds <= 9; hunds++)
	{
		for (tens = hunds + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hunds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (hunds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
