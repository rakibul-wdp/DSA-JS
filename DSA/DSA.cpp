// Algorithm (by Bob)
/*
Initialize sum = 0
for every natural number n in range 1 to 10^11(inclusive):
  add n to sum
sum is your answer
*/

#include <iostream>
using namespace std;

int findSum() {
  int sum = 0;

  for (int v = 1; v <= 10000000000; v++) {
    sum += v;
  }

  return sum;
}

int main() {
  int result = findSum();

  cout << result;

  return 0;
}