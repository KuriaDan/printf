#include "main.h"
/**
 * _print_char - prints character
 *
 * @list: receives character to be printed
 *
 * Return: 0 on SUCESSS -> length of char
 */
int _print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * _print_string - Print string
 *
 * @list: receives string to be printed
 *
 * Return: 0 on SUCESSS
 */
int _print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
  * print_percent - prints a percent sybol
  * @list: list of arguments
  * Return: amount of characters printed
  */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

