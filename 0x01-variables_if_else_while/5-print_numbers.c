#include <stdio.h>

/**
 * main - prints the digits of base 10
 * Followed by a new line
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
