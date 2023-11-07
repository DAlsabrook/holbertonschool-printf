#include "main.h"
/**
 * get_form - point to correct function to use
 * @s: char passed
 *
 * Return: int
 */
int (*get_form(const char *s))(va_list)
{
	spec_t spec[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};

	int i = 0;

	while (spec[i].id != NULL)
	{
		if ((spec[i].id[0]) == s[0])
		{
			return (spec[i].func);
		}
		i++;
	}

	return (0);
}
