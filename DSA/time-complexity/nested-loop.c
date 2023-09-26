#include <stdio.h>

int main() {
  int i, j, n, count;

  scanf("%d", &n);

  count = 0;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      count = count + 1;
    }
  }

  printf("n = %d, count = %d\n", n, count);

  return 0;
}

/*
n = 1, count = 1
n = 2, count = 4
n = 3, count = 9
n = 10, count = 100
n = 100, count = 10000

c = n^2
time complexity O(n^2)
*/