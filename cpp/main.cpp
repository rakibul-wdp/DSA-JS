#include <iostream>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Reference. " << age << " years odl. \n";
}

int main() {
  myFunction("Abul", 2);
  myFunction("Babul", 3);
  myFunction("Cabul", 4);

  return 0;
}