#include <ctype.h>

/**
 * _isupper - It gets the character input to check the case
 * @c: The parameter to be checked
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
