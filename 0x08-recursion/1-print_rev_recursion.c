#include <stdio.h>
/**
* _print_rev_recursion- Reverses string
* @s: string pointer
**/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
