#include <stdio.h>
/**
 * _strlen- String Length
 * s: Char
 * Return: 0
 */

int _strlen(char *s, char *str)
{
	int i = 0;
	s = str;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
