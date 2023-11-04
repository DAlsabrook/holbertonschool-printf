#include "main.h"
/**
 * print_char - prints chars
 * @c: char to print
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
