#include <ctype.h>

/**
 * _islower -  Check if a character is lowercased
 *
 * Return: 1 if it is lowercase and 0 if not
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
