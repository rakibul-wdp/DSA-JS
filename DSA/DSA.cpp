// Algorithm 5: Check whether a number is prime or not
/*
Step 1: Start
Step 2: Declare variables n, i, flag.
Step 3: Initialize variables
        flag <- 1
        i <- 2
Step 4: Read n from the user.
Step 5: Repeat the steps until i=(n/2)
     5.1 If remainder of n/i equals 0
            flag <- 0
            Go to step 6
     5.2 i <- i + 1
Step 6: If flag = 0
           Display n is not prime
        else
           Display n is prime
Step 7: Stop
*/

#include <iostream>

using namespace std;

int main() {
  int n, i, flag = 1;

  cin >> n;

  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }

  if (flag == 0) {
    cout << n << " is not prime" << endl;
  } else {
    cout << n << " is prime" << endl;
  }

    return 0;
}