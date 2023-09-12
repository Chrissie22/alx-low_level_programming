#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * @n: Number to print from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		printf("\n");
	} else if (n == 98)
	{
		printf("98\n");
	} else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		printf("\n");
	}
}
