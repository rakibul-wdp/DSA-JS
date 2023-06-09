#include <stdio.h>

int main() {
  char txt[] = "We ar the \"Vikings\" from the north.";
  char txt2[] = "It\'s alright";
  char text3[] = "The character \\ is called backslash";

  printf("%s\n", txt);
  printf("%s\n", txt2);
  printf("%s", text3);

  return 0;
}