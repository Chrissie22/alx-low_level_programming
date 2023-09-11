#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Followed by a new line
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
		for (j = 48; j <= 57; j++)
			for (k = 48; k <= 57; k++)
				for (l = 48; l <= 57; l++)
				{
					if ((k + l) > (i + j) && k >= i)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					if (i + j + k + l == 227 && i == 57)
					{
					continue;
					}
					else
					{
					putchar(44);
					putchar(32);
					}
					}
				}
	putchar('\n');
	return (0);
}
