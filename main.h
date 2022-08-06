#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <stdlib.h>
/**
 * struct locate - assoisates character with write print
 *
 * @sym : the symbot to identify which print to perform
 *
 * @f: function to be exectuted based on sym
 */
typedef struct locate
{
	char *sym;
	int (*f)(va_list);
} locate;
int _printf(const char *format, ...);
int _print_integer(int num);
unsigned int _print_unsignedint(unsigned int num);
int _print_string(char *s);
int _print_char(char c);
int dectoHexs(int num);
int dectoHexc(int num);
int decToBinary(int num);
int _putchar(char c);
#endif /* PRINTF_MAIN_H */
