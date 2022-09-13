#include <ctype.h>

/**
 * _isalpha - Checks if the character entered is an alpha
 * @c: The parameter to be checked
 *
 * Return: 1 if is an alpha, upper or low, 0 if otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c)){
		return (1);
	}
	else
	{
		return (0);
	}
}
