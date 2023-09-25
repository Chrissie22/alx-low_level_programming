#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string evalute
 * @accept: string containing characters to match
 *
 * Return: number of bytes in the initial segment
 * of s which contains only of the bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found, flg;

	found = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flg = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found++;
				flg++;
			}
		}
		if (flg == 0)
			return (found);
	}
	return (0);
}
