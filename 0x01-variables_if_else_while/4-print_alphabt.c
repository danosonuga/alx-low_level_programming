#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q')
		{
			continue;
		}
		else if (alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
