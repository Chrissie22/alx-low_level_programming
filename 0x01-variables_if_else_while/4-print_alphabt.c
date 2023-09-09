#include <stdio.h>

/**
 * main - prints all the letters except q and e
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Alx;

	for (Alx = 'a'; Alx <= 'z'; Alx++)
	{
		if (Alx != 'e' && Alx != 'q')
		{
			putchar(Alx);
		}
	}
	putchar('\n');
	return (0);
}
