#include "main.h"

/**
 * _strlen - Returns the lenghth of a string
 * @s: The parameter string to be counted
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return n;
}
