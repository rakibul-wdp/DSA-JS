#include <stdio.h>

int main() {
  int myNum;
  char myChar;

  printf("Type a number: \n");

  scanf("%d %c", &myNum, &myChar);

  printf("Your number is: %d\n", myNum);
  printf("Your char is: %c", myChar);

  return 0;
}