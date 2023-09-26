#include <stdio.h>

int main() {
  int i, n, result;

  scanf("%d", &n);

  result = 0;

  for (i = 1; i <= n; i++) {
    result = result + i;
  }

  printf("result = %d\n", result);

  return 0;
}

/*
r = r + 1
r = r + 2
r = r + 3
r = r + n

every single occur one addition operation and one assignment operation

time complexity O(2n) => 2 x O(n) => O(n) => linear graph
*/