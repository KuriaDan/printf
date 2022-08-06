#include "main.h"
int lencount(char *s)
{
	int i = 0;
	int count = 0;

	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
/**
 * _reverse - reverses string
 *
 * @s - receives string to be reversed
 *
 * Return: reversed string
 */
char *_reverse(char *s)
{
	char *reversed;
	int i = 0;
	int j = 0;
	int len = lencount(s);

	for (i = len; i <= 0; i--)
	{
		reversed[j] = s[i];
		j++;
	}
	return (reversed);
	
}
