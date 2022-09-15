#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3 == 0) && (count % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			continue;
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			continue;
		}
		else
		{
			printf("%d", count);
		}

		if (count != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
