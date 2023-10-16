#include <stdio.h>

void quick_sort(int A[], int low, int high) {
  if (low >= high) {
    return;
  }

  int p;
  p = partition(A, low, high);

  quick_sort(A, low, p - 1);
  quick_sort(A, p + 1, high);
}

int main() {
  int n = 8;
  int A[] = {1, 5, 6, 3, 5, 8, 7, 2, 9};

  quick_sort(A, 0, n);

  return 0;
}