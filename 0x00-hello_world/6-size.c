#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longIntSize = sizeof(long int);
	int longLongIntSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of a char: %d byte(s)", charSize);
	printf("Size of an int: %d byte(s)", intSize);
	printf("Size of a long int: %d byte(s)", longIntSize);
	printf("Size of a long long int: %d byte(s)", longLongIntSize);
	printf("Size of a float: %d byte(s)", floatSize);
	return (0);
}
