#include <stdio.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old. \n", name, age);
}

int main() {
  myFunction("Abul", 10);
  myFunction("Babul", 11);
  myFunction("Cabul", 12);

  return 0;
}