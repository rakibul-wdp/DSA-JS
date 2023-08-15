#include <stdio.h>

int main() {
  int tk;
  scanf("%d", &tk);
  if (tk >= 100) {
    printf("I will eat burger");
  } else if (tk >= 50) {
    printf("I will eat chop");
  }
  else
  {
    printf("I will not eat");
  }

  return 0;
}