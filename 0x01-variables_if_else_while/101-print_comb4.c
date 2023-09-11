#include <stdio.h>

/**
 * main - prints all possible different combinations of three digit
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				if (num3 > num2 && num2 > num1)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 + num2 + num3 != 168 && num1 != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
