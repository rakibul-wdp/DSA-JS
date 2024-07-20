/*
Problem: Give a number n, find the first n elements of the fibonacci sequence

In mathematics, the fibonacci sequence is a sequence in which each number is the sum of the two preceding ones.

The first two numbers in the sequence are 0 and 1
fibonacci(2) = [0, 1]
fibonacci(3) = [0, 1, 1]
fibonacci(7) = [0, 1, 1, 2, 3, 5, 8]
*/

const findFibonacciElements = (n) => {
  const fibonacciElements = [0, 1];

  for (let i = 2; i < n; i++)
    fibonacciElements[i] = fibonacciElements[i - 1] + fibonacciElements[i - 2];

  return fibonacciElements;
};

const result = findFibonacciElements(5);
console.log(result);

/*
Big-O Guide
Calculation not dependent on input size - O(1)
1. loop - O(n)
2. nested loops - O(n^2)
Input size reduced by half - O(logn)
*/
