#include <stdio.h>

int main() {
  int n, result;

  scanf("%d", &n);

  result = n * (n + 1) / 2;

  printf("result = %d\n", result);

  return 0;
}

/*
series: 1 + 2 + 3 + ... + n
3 addition operation
1 assignment operation
time complexity O(1)
*/