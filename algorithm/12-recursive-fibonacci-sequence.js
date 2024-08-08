/*
Recursive Fibonacci sequence

Problem: Give a number 'n', find the n'th element of the Fibonacci sequence

In mathematics, the Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones.

The first two numbers in the sequence are 0 and 1. (0, 1, 1, 2, 3, 5, 8...)

recursiveFibonacci(0) = 0
recursiveFibonacci(1) = 1
recursiveFibonacci(6) = 8
*/

function fibonacci(n) {
  if (n < 2) return n;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

console.log(fibonacci(4));

// O(n) - iterative
// O(2^n) - recursive
