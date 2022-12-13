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
here complexity depend on n that's why it's linier complexity, order of n complexity O(n)
*/

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

// here time complexity is O(n square)

int main() {
  int i, j, k, n, count;

  scanf("%d", &n);

  count = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      for (k = 0; k < n; k++) {
        count = count + 1;
      }
    }
  }

  printf("n = %d, count = %d\n", n, count);

  return 0;
}

// here time complexity is O(n cube)