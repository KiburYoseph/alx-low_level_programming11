#include <stdio.h>
/**
 * swap_int- Swapping
 * @a: variable
 * @b: variable
 * Return: 0
 */

int swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}
