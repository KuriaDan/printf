#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse a strinG
 *
 * @arg: va_list argument from the printf function
 *
 * Return: length of string
 */
int print_rev(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * rev_string - Reverses a string
 *
 * @s : string to reverse
 *
 * Return: pointer to a character
 */

char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
  * _memcpy - copy memory area
  * @dest: Destination for copying
  * @src: source to copy from
  * @n: number of bytes to copy
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
  * reverse_array - reverses the content of array
  * @a: Points to int
  * @n: takes int
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n = n - 1;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
