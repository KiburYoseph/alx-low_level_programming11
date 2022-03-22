#include <stdio.h>
/**
 * _puts- Entry
 * Return: 0
 * @c: Char
 */
int _putchar(char c);

int _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
