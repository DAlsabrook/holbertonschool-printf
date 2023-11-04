#include "main.h"
/**
 * print_string - prints string
 * @arg: argument passed in
 *
 * Return: number of char printed
 */
int print_string(va_list arg)
{
	int i, len;
	char *s;

	s = va_arg(arg, char *);
	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		putchar(s[i]);
	}

	return (len);
}
