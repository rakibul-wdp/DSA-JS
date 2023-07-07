#include <stdio.h>

int main() {
  int myAge = 23;
  int *ptr = &myAge;

  printf("%d\n", *ptr);

  printf("%p\n", ptr);

  return 0;
}