#include <stdio.h>

/** 
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
