/*
Power of Two

Problem: Give a positive integer 'n', determine if the number is a power of 2 or not. An integer is power of two if there exists an integer 'x' such that 'n' === 2^x

isPowerOfTwo(1) = true(2^0)
isPowerOfTwo(2) = true(2^1)
isPowerOfTwo(5) = false
*/

function isPowerOfTwo(n) {
  if (n < 1) return false;

  while (n > 1) {
    if (n % 2 !== 0) return false;
    n /= 2;
  }

  return true;
}

function isPowerOfTwoAlt(n) {
  return Number.isInteger(Math.sqrt(n));
}

// Big-O - O(logn)

function isPowerOfTwoBitWise(n) {
  if (n < 1) return false;

  return (n & (n - 1)) === 0;
}

console.log(isPowerOfTwoBitWise(9));

// Big-O - O(1)
