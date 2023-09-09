/*
Initialize fact = 1
For every value v in range 1 to n:
  Multiple the fact by v
fact contains the factorial of n
*/

#include <iostream>
using namespace std;

int factorial(int n) {
  int fact = 1;
  for (int v = 1; v <= n; v++) {
    fact = fact * v;
  }

  return fact;
}

int main() {
  int n;

  cin >> n;

  factorial(n);

  return 0;
}