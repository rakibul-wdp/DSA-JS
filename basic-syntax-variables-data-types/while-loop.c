#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};

  printf("%d\n", *(myNumbers + 1));

  printf("%d", *(myNumbers + 2));

  return 0;
}