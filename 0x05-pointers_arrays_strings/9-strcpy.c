#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src including \0
 * @dest: the destination to copy to
 * @src: the source of the copy
 * Return: char dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
