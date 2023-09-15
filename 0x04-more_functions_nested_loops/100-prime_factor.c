#include <stdio.h>

/**
 * main - Prints from 1 - 100, but prints 'Fizz' for multiples of 3,
 * and prints 'Buzz' for multiples of 5 and 'FizzBuzz' for both
 *
 * Return: Always 0 upon (Success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
