#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 * _printf - A simplified version of printf
 * @format: The format string containing
 * the characters and the format specifiers
 *
 * Return: The length of the output
 */
int _printf(const char *format, ...)
{
	int i = 0;
	unsigned int length = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			length += _putchar(va_arg(args, int)), i += 2;

		else if (format[i] == '%' && format[i + 1] == 's')
			length += print_string(va_arg(args, char *)), i += 2;

		else if (format[i] == '%' && format[i + 1] == '%')
			length += _putchar('%'), i += 2;

		else if (format[i] == '%' && format[i + 1] == '\0')
			length--, i++;

		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
			length += print_number(va_arg(args, int)), i += 2;

		else
			length += _putchar(format[i]), i++;
	}
	va_end(args);
	return (length);
}
