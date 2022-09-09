#include <stdio.h>

/**
 * main - Entry point ot the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* Gets the alphabet starting point */
	char alpha;

	/* Write to character to stdout */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
