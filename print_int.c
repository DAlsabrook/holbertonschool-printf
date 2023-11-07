#include "main.h"
/**
 * print_int - prints an integar
 * @arg: arguement from _printf
 * Return: amount of characters printed
 */
int print_int(va_list arg)
{
	int count = 0;
	int num, place;
	unsigned int abs_num, tmp;

	num = va_arg(arg, int);
	if (num < 0)
	{
		if (num == INT_MIN)
		{
			abs_num = 2147483648;
		}
		putchar('-');
		abs_num = num * -1;
		count++;
	}
	else
	{
		abs_num = num;
	}
	tmp = abs_num;
	place = 1;
	while (tmp > 9)
	{
		tmp /= 10;
		place *= 10;
	}
	while (place >= 1)
	{
		putchar(((abs_num / place) % 10) + 48);
		count++;
		place /= 10;
	}
	return (count);
}
