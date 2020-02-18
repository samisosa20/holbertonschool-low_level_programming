#include "holberton.h"

/**
* *_atoi - print only number
* @s: pointer to extrac number
* Return: pointer.
*/
int _atoi(char *s)
{
	int aux, i, sig;

	sig = 1;
	i = aux = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			sig = sig * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (aux >= 0)
		{
			aux = aux * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			aux = aux * 10 - (s[i] - '0');
			i++;
		}
	}
	sig = sig * -1;
	return (aux * sig);
}
