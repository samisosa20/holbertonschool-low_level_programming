#include <stdio.h>

/**
 * main - prints the first 98 numbers
 *
 * Return:0
 */

int main(void)
{
	long a, b, x, res, sum_ac, sum_bd;
	long spt_a, spt_b, spt_c, spt_d;

	a = 0;
	b = 1;
	for (x = 0; x < 91; x++)
	{
		res = a + b;
		a = b;
		b = res;
		printf("%ld, ", res);
	}
	spt_a = a / 10000000000;
	spt_b = a % 10000000000;
	spt_c = b / 10000000000;
	spt_d = b % 10000000000;
	for (; x < 98; x++)
	{
		sum_ac = spt_a + spt_c;
		sum_bd = spt_b + spt_d;
		if (sum_bd > 10000000000)
		{
			sum_bd %= 10000000000;
			sum_ac++;
		}
		if (x != 97)
		{
			printf("%ld%ld, ", sum_ac, sum_bd);
			spt_a = spt_c;
			spt_b = spt_d;
			spt_c = sum_ac;
			spt_d = sum_bd;
		}
		else
		{
			printf("%ld%ld\n", sum_ac, sum_bd);
		}
	}
	return (0);
}
