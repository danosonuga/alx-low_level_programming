#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int j, k;
	char i[10];

	j = 9;
	k = 0;
	while (j >= 0)
	{
		i[k] = s[j];
		j--;
		k++;
	}
	/* for (j = 9; k = 0; j >= 0; j--)
	{
		i[k] = s[j];
		k++;
	} */
	s = &i;
}
