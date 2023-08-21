#include <stdio.h>

int main() {
  int abul = 10;
  float babul = 100.5;
  char cabul = 'z';
  // printf("%d %f %c", abul, babul, cabul);
  printf("%0.1f", babul);

  return 0;
}

// int - stores integers (whole numbers), without decimals, such as 123 or - 123
// float - stores floating numbers, with decimals, such as 19.99 or -19.99
// char - stores single characters, such as "a" or "B". Char values ar surrounded by  single quotes

/**
 * To output the value of an int variable, use %d or %i surrounded by double quotes
 * To print other types, use %c for char and %f for float
*/