#include <stdio.h>
void _puts_recursion(char *s)
{
  if (*str == '\0')
  return;
  printf("%c",*str);
  _puts_recursion(str+1);
}
int main(void)
{
  char str[20];
  str[20] = {"Puts with recursion"};
  +puts_recursion(str);
  return (0);
}
