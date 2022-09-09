#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point to the program
 *
 * Return: Returns 1
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, s, strlen(s));
	return (1);
}
