#include "main.h"
/**
 * rot13 - Encodes string with rot13
 *
 * @str: takes string
 *
 * Return: Encoded string
 */
int rot13(va_list list)
{
	int i = 0;
	int m;
	char *str;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (; str[i] != '\0'; i++)
	{
		for (m = 0; m <= 52; m++)
		{
			if (str[i] == a[m])
			{
				_putchar(r[m]);
				break;
			}
		}
		if (m == 53)
			_putchar(str[i]);

	}
	return (i);
}
