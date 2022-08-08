#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct locate - assoisates character with write print
 *
 * @sym : the symbot to identify which print to perform
 *
 * @f: function to be exectuted based on sym
 */
struct locate
{
	char *sym;
	int (*f)(va_list);
};
typedef struct locate locate;

int _printf(const char *format, ...);
int _print_integer(va_list);
int _print_unsigned_int(unsigned int);
int _print_string(va_list);
int _print_char(va_list);
int _print_octal(va_list);
int _print_hex(va_list list);
int _print_heX(va_list list);
int _print_binary(va_list);
int rot13(va_list list);
int print_rev(va_list arg);
void reverse_array(int *a, int n);
int _putchar(char c);
int parser(const char *format, locate print_list[], va_list arg_list);
int print_number(va_list args);
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_percent(__attribute__((unused))va_list list);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
int unsigned_integer(va_list list);
#endif /* PRINTF_MAIN_H */
