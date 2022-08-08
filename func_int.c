#include "main.h"
/**
 * _print_integer - Prints integer
 *
 * @list: list of arguments
 *
 * Return: amount of characters written
 */
int _print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
