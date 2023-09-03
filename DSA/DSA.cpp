// Algorithm 4: Find the factorial of a number
/*
Step 1: Start
Step 2: Declare variables n, factorial and i.
Step 3: Initialize variables
        factorial <- 1
        i <- 1
Step 4: Read value of n
Step 5: Repeat the steps until i = n
     5.1: factorial <- factorial * i
     5.2: i <- i + 1
Step 6: Display factorial
Step 7: Stop
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c, D, x1, x2, rp, ip;

  cout << "Enter the coefficient a: ";
  cin >> a;
  cout << "Enter the coefficient b: ";
  cin >> b;
  cout << "Enter the coefficient c: ";
  cin >> c;

  D = b * b - 4 * a * c;

  if (D >= 0) {
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    cout << "Real roots:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  } else {
    rp = -b / (2 * a);
    ip = sqrt(-D) / (2 * a);
    cout << "Complex roots:" << endl;
    cout << "x1 = " << rp << " + j" << ip << endl;
    cout << "x2 = " << rp << " - j" << ip << endl;
  }

  return 0;
}