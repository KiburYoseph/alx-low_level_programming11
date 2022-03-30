#include <stdio.h>
/**
* _strlen_recursion- shows length of string
* @s: string pointer
*/
int _strlen_recursion(char *s);
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return 1 + recLen(s + 1);
	}
	
}
