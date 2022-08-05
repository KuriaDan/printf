#include "main.h"
/**
 * _print_integer - Prints integer
 *
 * @num: recieves int to be printed
 *
 * Return: 0 on SUCESS
 */
int _print_integer(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
	}
	if (num / 10)
		_print_integer(num / 10);
	_putchar(num % 10 + '0');
	return (0);
}
