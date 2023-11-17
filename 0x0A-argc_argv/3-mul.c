#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n1, n2, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
