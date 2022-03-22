#include <stdio.h>
/**
 * main- Entry point
 * Return: 0
 */
int reset_to_98(int n)
{
	int *p = &n;
	*p = 98;
	return (0);
}
