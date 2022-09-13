#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";

	unsigned int long i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
