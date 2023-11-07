#include "main.h"
/**
 * print_char - prints chars
 * @arg: arguement passed into _printf
 *
 * Return: 1
 */
int print_char(va_list arg)
{
	char s;

	s = va_arg(arg, int);
	putchar((char)s);
	return (1);
}
