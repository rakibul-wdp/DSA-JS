/*
Factorial of a number

Problem: Give an integer 'n', find the factorial of that integer

In mathematics, the factorial of a non-negative integer 'n', denoted n!, is the product of all positive integers less than or equal to 'n'

factorial of zero is 1.
factorial(4) = 4*3*2*1 = 24
factorial(5) = 5*4*3*2*1 = 120
*/

function findFactorial(n) {
  let fac = 1;
  for (let i = n; i >= 1; i--) {
    fac *= i;
  }

  return fac;
}

console.log(findFactorial(4));

// Big-O - O(n)
