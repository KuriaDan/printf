/**
 * File -_printf.c
 * Author:
 *	 Bezawork Lindlof
 *	 KuriaDan
 */
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - counts number of characters
 * @format: Format of what needs to be printed
 * Return: int or chars
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	va_list args;
	locate list[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{"b", _print_binary},
		{"u", unsigned_integer},
		{"o", _print_octal},
		{"x", _print_hex},
		{"X", _print_heX},
		{"r", print_rev},
		{"R", rot13},
		{NULL, NULL}
	};
	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	printed_chars = parser(format, list, args);
	va_end(args);
	return (printed_chars);
}
