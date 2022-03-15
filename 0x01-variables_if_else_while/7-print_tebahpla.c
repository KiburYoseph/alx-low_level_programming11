#include <stdio.h>
/**
 * main- Entry point
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		printf("%c", c);
	return (0);
}
