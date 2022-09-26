#include "main.h"

/**
 * strchr - Locates a character in a string
 * @s: The buffer string the character would be stored
 * @c: The character to be located
 *
 * Return: a pointer of the first occurence of c in
 * 		the string s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
