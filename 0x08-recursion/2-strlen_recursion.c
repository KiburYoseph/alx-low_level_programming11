#include <stdio.h>
/**
* _strlen_recursion- shows length of string
* @s: string pointer
* Return: Length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
