#include <stdio.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, w;

	for (i = 0 ; i < 1000 ; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		w = i % 10;
		if (j < k && k < w)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(w + '0');
			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
