// Algorithm 2: Find the largest number among three numbers
/**
 * Step 1: Start
 * Step 2: Declare variables a,b and c.
 * Step 3: Read variables a,b and c.
 * Step 4: If a > b
 *            If a > c
 *               Display a is the largest number.
 *            Else
 *              Display c is the largest number.
 *         Else
 *           If b > c
 *              Display b is the largest number.
 *           Else
 *             Display c is the greatest number.
 * Step 5: Stop
*/

#include <stdio.h>

int main() {
  int a = 15;
  int b = 5;
  int c = 10;

  if (a > b) {
    if (a > c) {
      printf("a is the largest number");
    } else {
      printf("c is the largest number");
    }
  } else {
    if (b > c) {
      printf("b is the largest number");
    } else {
      printf("c is the greatest number");
    }
  }

  return 0;
}