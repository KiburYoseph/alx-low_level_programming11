#include <stdio.h>
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
	printf("%c\n", c);
}
int main(void)
{
	print_alphabet();
	return (0);
}
