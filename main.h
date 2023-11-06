#ifndef PRINT_F
#define PRINT_F
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

typedef struct spec
{
	char *id;
	int (*func)(va_list);
}
spec_t;

int _printf(const char *format, ...);
int (*get_form(const char *s))(va_list);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg);

#endif
