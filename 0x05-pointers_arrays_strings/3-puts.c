#include <stdio.h>
/**
 * _puts- Entry
 * Return: 0
 * @str: Char
 */
int _putchar(char c);

int _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
