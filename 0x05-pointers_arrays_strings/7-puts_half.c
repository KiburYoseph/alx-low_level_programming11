#include "main.h"
/**
 * puts_half - prints last half
 *
 * @str: input
 *
 * Return : void
 */
void puts_half(char *str)
{
	int i, length, half;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		half = length / 2;
		for (i = half; i < length; i++)
		{
			_putchaer(str[i]);
		}
	}
	else
	{
		half = (length - 1) / 2;
		for (i = half + 1; 1 < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}