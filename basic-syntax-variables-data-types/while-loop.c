#include <stdio.h>

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Abul");
  myFunction("Babul");
  myFunction("Cabul");

  return 0;
}