#include "main.h"
/**
 * printf - prints user input and variable depending on a format specifier
 * @format: used to identify which datatype is passed in
 *
 * Return: number of characters printed to standard output
 */
int _printf(const char *format, ...) {
	va_list args;
	int count = 0;
	spec_t obj;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0') {
		if (*format == '%'){
			format++;
			if (*format == '\0')
				putchar('%');
				count--;
				continue;
			obj.func = get_form(format);
			if (obj.func == NULL) {
				putchar('%');
				putchar(*format);
				count += 2;
			}
			else
				count += obj.func(args);
		}
		else
			putchar(*format);
			count++;
		format++;
	}
	va_end(args);
	return (count);
}
