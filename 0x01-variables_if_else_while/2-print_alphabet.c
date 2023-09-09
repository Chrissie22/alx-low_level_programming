#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alx;

	for (alx = 'a'; alx <= 'z'; alx++)
		putchar(alx);
	putchar('\n');

	return (0);
}
