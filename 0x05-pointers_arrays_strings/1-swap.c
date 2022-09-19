#include "main.h"

/**
 * swap_int - Swaps the value of the intergers a and b
 * @a: the first parameter to be swapped
 * @b: the second parameter to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
