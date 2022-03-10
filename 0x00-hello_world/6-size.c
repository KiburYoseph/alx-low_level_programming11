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
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long i));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long i));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
