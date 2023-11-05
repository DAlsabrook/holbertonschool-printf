#include "main.h"
/**
 * print_string - prints string
 * @arg: argument passed in
 *
 * Return: number of char printed
 */
int print_string(va_list arg)
{
	int i;
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}

	return (--i);
}
