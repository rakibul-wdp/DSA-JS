#include <stdio.h>

int main() {
  int n1, n2, result;

  n1 = 10;
  n2 = 20;
  result = n1 + n2;

  return 0;
}

/*
here is 3 assignment operation and 1 mathematical operation.
total 4 operation so O(4) not, it's O(1)
*/

int main() {
  int n, result;

  scanf("%d", &n);

  result = n * (n + 1) / 2;

  printf("result = %d\n", result);

  return 0;
}

/*
here is 3 mathematical operation and 1 assignment operation.
total 4 operation and it's O(1), because never change value of n
*/