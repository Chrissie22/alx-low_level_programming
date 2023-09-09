#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
