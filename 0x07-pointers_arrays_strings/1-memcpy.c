#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: The buffer destination area to be copied to
 * @src: The buffer source to be copied from
 * @n: The size of buffer to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}

	return (dest);
}
