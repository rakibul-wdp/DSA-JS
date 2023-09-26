#include <stdio.h>

int main() {
  int i, j, s, n;

  scanf("%d", &n);

  s = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++) {
      s[i][j] = a[i][j] + b[i][j];
    }
  }
}

/*
space complexity is O(n^2)
*/