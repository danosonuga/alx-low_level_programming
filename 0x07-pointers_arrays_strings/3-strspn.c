#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The buffer to be checked
 * @accept: The buffer checker
 * Return: The number of bytes in the initial segments
 *	of s which only consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}

	return (i);
}
