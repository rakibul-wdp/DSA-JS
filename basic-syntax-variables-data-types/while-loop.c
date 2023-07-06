#include <stdio.h>

int main() {
  int fullName[30];

  fgets(fullName, sizeof(fullName), stdin);

  printf("Hello %s", fullName);

  return 0;
}