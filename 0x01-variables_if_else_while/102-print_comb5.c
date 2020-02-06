#include <stdio.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, x, kk, jj;

	for (i = 0 ; i < 100 ; i++)
	{
		j = i / 10;
		k = i % 10;
		for (x = 0 ; x < 100 ; x++)
		{
			jj = x / 10;
			kk = x % 10;
			if (j < jj || (j == jj && k < kk))
			{
				putchar(j + '0');
				putchar(k + '0');
				putchar(' ');
				putchar(jj + '0');
				putchar(kk + '0');
				if (!(j == 9 && k == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
