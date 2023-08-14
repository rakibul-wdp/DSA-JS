#include <stdio.h>

int main() {
  int abul, babul;
  char cabul;
  float dabul;
  scanf("%d %f %c", &abul, &dabul, &cabul);
  printf("%d %0.1f %c", abul, dabul, cabul);

  return 0;
}