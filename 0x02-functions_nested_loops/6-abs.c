#include "holberton.h"

/**
* _abs - put the numbre in abs.
* @i: variable to put positive.
* Return: Always 0.
*/
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
	{
		return (i);
	}
}
