#include "main.h"
/**
 * print_percent - prints %
 *
 * Return: 1
 */
int print_percent(va_list arg)
{
    va_arg(arg, char *);
    putchar(37);
    return (1);
}
