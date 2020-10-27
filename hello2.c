#include <stdio.h>

int main(void)
{
  get_string(What is your name?\n");
  string name = get_string("What is your name?\n");
  printf("hello, %s\n, name");
  return 0;
}
