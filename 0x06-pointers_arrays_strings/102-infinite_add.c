#include "holberton.h"

/**
 *infinite_add - concatenates two strings
 *@n1: number 1
 *@n2: number 2
 *@r: pointer that contains sum of numbers
 *@size_r: size of buffer that contains sum of numbers
 *Return: the pointer with new number
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1;
	int ln2;
	int nbig;
	int op;
	int ad;

	for (ln1 = 0; n1[ln1] != '\0'; ln1++)
		for (ln2 = 0; n2[ln2] != '\0'; ln2++)
			if (ln1 >= ln2)
				nbig = ln1;
			else
				nbig = ln2;
	if (size_r <= (nbig + 1))
		return (0);
	while (nbig > 0)
	{
		if (ln1 >= 0 && ln2 >= 0)
		{
			op = (*(n1 + ln1) - '0') + (*(n2 + ln2) - '0') + ad;
		}
		else
		{
			if (ln1 < 0 && ln2 >= 0)
				op = (*(n2 + ln2) - '0') + ad;
			else
			{
				if (ln1 >= 0 && ln2 < 0)
					op = (*(n1 + ln1) - '0') + ad;
			}
		}
		*(r + nbig) = (op % 10) + '0';
		ad = op / 10;
		ln1--;
		ln2--;
		nbig--;
	}
	if (*(r + 0) == 0)
		return (r + 1);
	r[nbig + 1] = '\n';
	return (r);
}
