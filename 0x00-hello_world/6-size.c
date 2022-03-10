#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	float f;
	char c;
	
	printf("Size of a char: %lu.\n", sizeof(c));
	printf("Size of an int: %lu.\n", sizeof(i));
	printf("Size of a long int: %lu.\n", (long)sizeof(i));
	printf("Size of a long long int: %lu.\n", (long long)sizeof(i));
	printf("Size of a float: %lu.\n", sizeof(f));
	return (0);
}
