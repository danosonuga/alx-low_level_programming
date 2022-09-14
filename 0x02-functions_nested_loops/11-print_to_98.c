#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the numbers up or down to 98
 * @n: accepts a parameter n
 *
 * Return: n
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n--);
			printf("%d\n", n);
		}
		printf("\n");
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
			n++;
		}
	}
}
