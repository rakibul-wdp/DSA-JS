#include <stdio.h>

void max_heapify(int heap[], int heap_size, int i) {
  int l, r, largest, t;

  l = left(i);
  r = right(i);

  if (l <= heap_size && heap[l] > heap[i]) {
    largest = l;
  } else {
    largest = i;
  }

  if (r <= heap_size && heap[r] > heap[largest]) {
    largest = r;
  }

  if (largest != i) {
    t = heap[i];
    heap[i] = heap[largest];
    heap[largest] = t;

    max_heapify(heap, heap_size, largest);
  }
}

void build_max_heap(int heap[], int heap_size) {
  int i;

  for (i = heap_size / 2; i >= 1; i--) {
    max_heapify(heap, heap_size, i);
  }
}

void heap_sort(int heap[], int heap_size) {
  int i, t;

  for (i = heap_size; i > 1; i--) {
    t = heap[1];
    heap[1] = heap[i];
    heap[i] = t;

    heap_size -= 1;
    max_heapify(heap, heap_size, 1);
  }
}