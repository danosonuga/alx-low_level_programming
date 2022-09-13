#include "main.h"

/**
 * print_last_digit - Prints the last digit of the parameter
 * @n: The parameter of the function print_last_digit
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
