#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("%d is even number.\n", n);
  } else {
    printf("%d is odd number.\n", n);
  }

  return 0;
}

/*
this program time complexity is O(1) because here just happen modulus and comparison operation

space complexity O(1)
because we have just one variable "n"
*/