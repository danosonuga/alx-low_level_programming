#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	char k = s[0];

	int j = 0;

	for (; s[j] != '\0';)
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		j--;
		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}
}
