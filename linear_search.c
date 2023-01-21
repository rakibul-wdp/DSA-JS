#include <stdio.h>

// linear search find one by one

int linear_search(int A[], int n, int x) {
  int i;

  for (i = 0; i < n; i++) {
    if (A[i] == x) {
      return i;
    }
  }
  return -1;
}

// here time complexity is O(n)
// here space complexity is O(1)