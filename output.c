#include <stdio.h>

int main() {
  int num1, num2;
  char percent;
  scanf("%d %c %d %c", &num1, &percent, &num2, &percent);
  printf("%d%% %d%%", num1, percent, num2, percent);

  return 0;
}