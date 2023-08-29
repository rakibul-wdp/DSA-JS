#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1;
  struct myStructure s2;

  s1.myNum = 15;
  s1.myLetter = 'A';

  s2.myNum = 20;
  s2.myLetter = 'C';

  printf("My number: %d\n", s2.myNum);
  printf("My letter: %c\n", s2.myLetter);

  return 0;
}