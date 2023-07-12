#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};

  printf("%p\n", myNumbers);

  printf("%p\n", &myNumbers[0]);

  return 0;
}