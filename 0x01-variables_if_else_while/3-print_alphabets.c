#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,then in uppercase
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Alx;

	for (Alx = 'a'; Alx <= 'z'; Alx++)
	{
		putchar(Alx);
	}
	for (Alx = 'A'; Alx <= 'Z'; Alx++)
	{
		putchar(Alx);
	}
	putchar('\n');

	return (0);
}
