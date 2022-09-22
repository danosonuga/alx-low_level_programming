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
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
