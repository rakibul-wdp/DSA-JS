#include <stdio.h>

void merge_sort(int A[], int left, int right) {
  if (left >= right) {
    return;
  }

  int mid = left + (right - left) / 2;

  merge_sort(A, left, mid);
  merge_sort(A, mid + 1, right);

  merge(A, left, mid, right);
}

void merge(int A[], int left, int mid, int right) {
  int i;
  int index_a, index_l, index_r;
  int size_left, size_right;

  size_left = mid - left + 1;
  size_right = right - mid;

  int L[size_left], R[size_right];

  for (i = 0; i < size_left; i++) {
    L[i] = A[left + i];
  }
}