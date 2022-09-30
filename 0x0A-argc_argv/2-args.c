#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: The Argument count
 * @argv: The Argument array
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
