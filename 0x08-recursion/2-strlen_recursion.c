#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: The sting of which the length is printed
 *
 * Return: The length of the string s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
