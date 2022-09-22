#include "main.h"


/**
 * _strncpy - copies n bytes of src string to the dest string
 * @dest: string parameter to copy to
 * @src: string parameter being copied
 * @n: largest number of bytes to be copied
 *
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
