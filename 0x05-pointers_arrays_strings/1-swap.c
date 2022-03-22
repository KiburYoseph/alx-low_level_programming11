#include <stdio.h>
/**
 * swap_int- Swapping
 * Return: 0
 */

int swap_int(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}
