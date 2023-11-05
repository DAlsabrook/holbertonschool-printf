#include "main.h"
/**
 * print_percent - prints %
 *
 * Return: 1
 */
int print_percent(va_list arg)
{
	char s;

	s = va_arg(arg, int);
	s = '%';
	putchar((char)s);

	return (-1);
}
