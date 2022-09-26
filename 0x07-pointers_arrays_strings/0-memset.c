#include "main.h"

/**
 * _memset - Fills the buffer s with bytes b
 * @s: The buffer to be filled
 * @b: The buffer to be used to fill s
 * @n: The size of the buffer to be filled
 *
 * Return: a pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
