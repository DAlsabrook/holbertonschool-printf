#include "main.h"

/**
 * print_int - prints an integar
 * @arg: arguement from _printf
 * Return: amount of characters printed
 */

int print_int(va_list arg)
{
	int a = va_arg(arg, int);

	putchar(a);
	return (1);
}
