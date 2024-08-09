/*
Recursive factorial of a number

Problem: Give an integer 'n', find the factorial of that integer

factorial of zero is 1
factorial(4) = 4*3*2*1 = 24
factorial(5) = 5*4*3*2*1 = 120
*/

function recursion(n) {
  if (n === 0) return 1;

  return n * recursion(n - 1);
}

console.log(recursion(5));

// Big-O = O(n)
