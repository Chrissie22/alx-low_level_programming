#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string to convert
 *
 * Return: numbers derived
 */
int _atoi(char *s)
{
	int i, len, num, digit, flg, opr;

	i = 0;
	len = 0;
	opr = 0;
	num = 0;
	digit = 0;
	flg = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && flg == 0)
	{
		if (s[i] == '-')
			++opr;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (opr % 2)
				digit = -digit;
			num = num * 10 + digit;
			flg = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			flg = 0;
		}
		i++;
	}
	if (flg == 0)
		return (0);

	return (num);
}
