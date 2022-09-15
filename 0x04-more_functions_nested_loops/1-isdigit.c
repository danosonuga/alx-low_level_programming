#include "main.h"

/**
 * _isdigit - Checks if the parameter is a digit
 * @c: The parameter to be checked
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if(isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
