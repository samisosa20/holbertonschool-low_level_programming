#include <stdio.h>
#include "holberton.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0)
	{
		if (month >= 2 && day >60)
		{
			day++;
		}
		if (month == 2 && day > 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 1 && day > 31)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else if (month == 3 && day > 91)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 60, year);
		}
		else if (month == 4 && day > 121)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 91, year);
		}
		else if (month == 5 && day > 152)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 121, year);
		}
		else if (month == 6 && day > 182)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 152, year);
		}
		else if (month == 7 && day > 213)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 182, year);
		}
		else if (month == 8 && day > 244)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 213, year);
		}
		else if (month == 9 && day > 274)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 244, year);
		}
		else if (month == 10 && day > 305)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 274, year);
		}
		else if (month == 11 && day > 335)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 305, year);		
		}
		else if (month == 12 && day > 336)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 335, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}
	else
	{
		if (month == 2 && day > 59)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 1 && day > 31)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else if (month == 3 && day > 90)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 59, year);
		}
		else if (month == 4 && day > 120)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 90, year);
		}
		else if (month == 5 && day > 151)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 120, year);
		}
		else if (month == 6 && day > 181)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 151, year);
		}
		else if (month == 7 && day > 212)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 181, year);
		}
		else if (month == 8 && day > 243)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 212, year);
		}
		else if (month == 9 && day > 273)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 243, year);
		}
		else if (month == 10 && day > 304)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 273, year);
		}
		else if (month == 11 && day > 334)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 304, year);		
		}
		else if (month == 12 && day > 335)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 334, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
