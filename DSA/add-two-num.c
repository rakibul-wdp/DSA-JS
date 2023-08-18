// Algorithm 1: Add two numbers entered by the user
/**
 * Step 1: Start
 * Step 2: Declare variables num1, num2 and sum.
 * Step 3: Read values num1 and num2.
 * Step 4: Add num1 and num2 and assign the result to sum. (sum <- num1 + num2)
 * Step 5: Display sum
 * Step 6: Stop
*/

#include <stdio.h>

int main() {
  int num1;
  int num2;

  scanf("%d %d", &num1, &num2);

  int sum = num1 + num2;

  printf("%d", sum);

  return 0;
}