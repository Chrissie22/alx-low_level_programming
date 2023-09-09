#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
