#include <stdio.h>
/**
 * _strlen- String Length
 * @str: Char
 * Return: 0
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
