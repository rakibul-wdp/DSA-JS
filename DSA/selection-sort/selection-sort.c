#include <stdio.h>

void selection_sort(int A[], int n) {
  int i, j, index_min, temp;

  for (i = 0; i < n - 1; i++) {
    index_min = i;
    for (j = i + 1; j < n; j++) {
      if (A[j] < A[index_min]) {
        index_min = j;
      }
    }
    if (index_min != i) {
      temp = A[i];
      A[i] = A[index_min];
      A[index_min] = temp;
    }
  }
}

void bubble_sort(int A[], int n) {
  int i, j, temp;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (A[j] > A[j+1]) {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}

void insertion_sort(int A[], int n) {
  int i, j, item;

  for (i = 1; i < n; i++) {
    item = A[i];

    j = i - 1;
    while (j >= 0 && A[j] > item) {
      A[j + 1] = A[j];
      j = j - 1;
    }
    A[j + 1] = item;
  }
}

int main () {
  return 0;
}