#include <stdio.h>

int main() {
  char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  printf("%d\n", strlen(alphabet));
  printf("%d", sizeof(alphabet));

  return 0;
}