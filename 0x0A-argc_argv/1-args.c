#include <stdio.h>

/**
 * Prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Argument array
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
