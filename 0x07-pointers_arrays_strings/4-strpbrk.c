#include "main.h"

/**
 * _strpbrk - Locates the first occurence in the string s
 * @s: The string to check
 * @accept: The string to be checked
 *
 * Return: A pointer to string s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
