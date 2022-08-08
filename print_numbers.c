#include "main.h"
/**
 * print_number - print Numbers
 *
 * @args: num received by va_arg
 *
 * Return: length count
 */
int print_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div *= 10;
	}
	return (len);
}
/**
  * unsigned_integer - print unsigned integers
  * @list: List of al arguments
  * Return: a cunt of the numbers
  */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_print_unsigned_int(num));
	if (num < 1)
		return (-1);
	return (_print_unsigned_int(num));
}
/**
  * _print_unsigned_int - Prints an unsigned number
  * @n: unsigned int to be printed
  * Return: amount of numbers to be printed
  */
int _print_unsigned_int(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	for (; n / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

