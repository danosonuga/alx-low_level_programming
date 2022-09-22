#include "main.h"

/**
 * _strcat -  Concatenates two strings
 * @dest: The first string parameter
 * @src: The second string parameter
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
