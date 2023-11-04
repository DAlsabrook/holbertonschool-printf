#include "main.h"
/**
 * printf - prints user input and variable depending on a format specifier
 * @format: used to identify which datatype is passed in
 *
 * Return: number of characters printed to standard output
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;
	spec_t obj;

	va_start(args, format);

	count = 0;

	if (format == NULL)
	{
		return(0);
	}

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			obj.func = get_form(format);
			if (obj.func == NULL)
			{
				putchar('%');
				putchar(*format);
				count += 2;
			}
			else
			{
				count += obj.func(args);
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);

	return (count);
}
