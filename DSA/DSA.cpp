// Algorithm 3: Find Roots of a Quadratic Equation ax^2+bx+c=0
/*
Step 1: Start
Step 2: Declare variables a, b, c, D, x1, x2, rp and ip;
Step 3: Calculate discriminant
        D <- b2-rac
Step 4: If D >= 0
                r1 <- (-b+root(D))/2a
                r2 <- (-b-root(d))/2a
                Display r1 and r2 as roots.
        Else
            Calculate real part and imaginary part
            rp <- -b/2a
            ip <- root(-D)/2a
            Display rp+j(ip) and rp-j(ip) as roots
Step 5: Stop
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