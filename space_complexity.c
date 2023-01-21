#include <stdio.h>

// Space complexity

int main() {
  int n;

  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("%d id even number.\n", n);
  } else {
    printf("%d is odd number.\n", n);
  }

  return 0;
}

// here time complexity is O(1) and space complexity also O(1) because we use one variable like n

int main() {
  int i, n, even[101];

  for (i = 0; i < 101; i++) {
    even[i] = 0;
  }

  for (i = 0; i < 101; i += 2) {
    even[i] = 1;
  }

  scanf("%d", &n);

  if (even[n]) {
    printf("%d is even number.\n", n);
  } else {
    printf("%d is odd number.\n", n);
  }

  return 0;
}

// here space complexity is O(n)

// tow matrix summation program

for (i = 0; i < n; i++) {
  for (j = 0; j < n; j++) {
    s[i][j] = a[i][j] + b[i][j];
  }
}

// here space complexity is O(n^2)