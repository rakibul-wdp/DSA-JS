/*
Prime Number

Problem: Give a natural number 'n', determine if the number is prime or not

A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers.

isPrime(5) = true(1*5 or 5*1)
isPrime(4) = false(1*4 or 2*2 or 4*1)
*/

function isPrime(n) {
  if (n < 2) return false;
  else if (n === 2) return true;
  else if (n % n === 0 && n % 1 === 0 && n % 2 !== 0) return true;
  return false;
}

function isPrimeAlternative(n) {
  if (n < 2) return false;
  for (let i = 2; i < n; i++) if (n % i === 0) return false;

  return true;
}

console.log(isPrimeAlternative(4));

// Big-O = O(n)
