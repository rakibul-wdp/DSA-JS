# Practice

- 1101011 is binary number: Find its equivalent decimal number.
- 1 x 2^6 + 1 x 2^5 + 1 x 2^3 + 1 x 2^1 + 1 x 2^0
- 64 + 32 + 8 + 2 + 1
- 107

- Find the binary representation for 73 (a decimal number).
- 73 / 2 = 36; remainder = 1
- 36 / 2 = 18; remainder = 0
- 18 / 2 = 9; remainder = 0
- 9 / 2 = 4; remainder = 1
- 4 / 2 = 2; remainder = 0
- 2 / 2 = 1; remainder = 0
- 1 / 2 = 0; remainder = 1
- 1001001

- Is 77 a prime number?
- No

- What about 169? Prime or composite?
- composite

- Find out the 12th prime number.
- 37

- Find out sum of first n odd numbers. Try n = 1, 2, 3, ...
- 1, 3, 6, 10, 15, 21, ...
- so, each time increase 1...

# Practice - 02

- Question 01: Choose a prime number from the range of 50 to 100. We will call it P. Write in Details.
- So, within the range of 50 to 100, the prime number I have chosen is 53. It meets the criteria of being greater than 1 and only divisible by 1 and itself, which are the defining characteristics of prime numbers.

- Question 02: Find the binary representation of P. You must show the process.
- D is the decimal number.
- Initialize B as an empty string.
- While D is greater than 0:
- Q = D / 2
- R = D % 2
- Append R to the beginning of B
- Set D to Q
- B now contains the binary representation of the original decimal number.

- Question 03: You and your friends in class might be choosing different values for P. Can anybody choose a P that is an odd number? Explain your answer.
- In mathematics, odd numbers are integers that cannot be divided by 2 without leaving a remainder. They are expressed as 2n + 1, where "n" is an integer. Even numbers, on the other hand, are integers that can be divided by 2 without a remainder and are expressed as 2n, where "n" is an integer.
  So, anybody can choose "P" to be an odd number, and there's no inherent mathematical restriction against it.

- Question 04: Ternary numbers are formed with a number system with base 3. Given the ternary number 10212, find its decimal value. Write in Details
- To find the decimal value of the ternary number 10212, you'll need to convert it from base 3 to base 10. To do this, you can use the positional notation system, just like you would for converting from binary to decimal.
- So, the decimal value of the ternary number 10212 is 104.

- Question 05: Build a sieve of Eratosthenes to determine if 19 is a prime number. Show the state of the table at each step.
- The Sieve of Eratosthenes is a method for finding all prime numbers up to a given limit. To determine if 19 is a prime number using this method, you can create a table and follow these steps while marking multiples of prime numbers:

Step 1: Create a table with all numbers from 2 to the number you want to check (in this case, up to 19).

```
Table: 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
```

Step 2: Start with the first number in the table, which is 2. 2 is a prime number, so we keep it.

Step 3: Mark all multiples of 2 as composite. Starting from 4, every second number is a multiple of 2.

```
Table: 2 3 X 5 X 7 X 9 X 11 X 13 X 15 X 17 X 19
```

Step 4: Move to the next unmarked number, which is 3. 3 is a prime number, so we keep it.

Step 5: Mark all multiples of 3 as composite. Starting from 6, every third number is a multiple of 3.

```
Table: 2 3 X 5 X 7 X X X 11 X 13 X X 17 X 19
```

Step 6: Continue this process, moving to the next unmarked number (5), which is also a prime number.

Step 7: Mark all multiples of 5 as composite.

```
Table: 2 3 X 5 X 7 X X X 11 X 13 X X 17 X X
```

Step 8: Continue this process until you have checked all numbers up to the square root of 19. In this case, the square root of 19 is approximately 4.36, so you only need to check up to 4.

Step 9: After completing the process, if the number you are checking (in this case, 19) is still unmarked, it is a prime number. In our table, 19 is unmarked, so it is a prime number.

So, using the Sieve of Eratosthenes, we have determined that 19 is a prime number.

- Question 06: Take two natural numbers X and Y. If X \* Y = Z, is Z even or odd when X and Y-
  - (Case 1) both are even: even / odd
  - (Case 2) both are odd: even / odd
  - (Case 3) One of them is odd, the other one is even: even / odd
  - Note: (Answer in even or odd) Write in Details
- The parity (even or odd) of the product Z, when two natural numbers X and Y are multiplied, depends on their individual parities. Let's analyze each case:

**Case 1: Both X and Y are even.**

- When both X and Y are even, they can be expressed as X = 2A and Y = 2B, where A and B are natural numbers.
- The product Z = X _ Y = (2A) _ (2B) = 4AB.
- Z is divisible by 4, which means Z is even.
- Therefore, in Case 1, the product Z is even.

**Case 2: Both X and Y are odd.**

- When both X and Y are odd, they can be expressed as X = 2A + 1 and Y = 2B + 1, where A and B are natural numbers.
- The product Z = X _ Y = (2A + 1) _ (2B + 1) = 4AB + 2A + 2B + 1.
- Z is of the form 4AB + 2(A + B) + 1, where 4AB and 2(A + B) are even numbers, and when you add an odd number (1), you get an odd number.
- Therefore, in Case 2, the product Z is odd.

**Case 3: One of them is odd, the other one is even.**

- Without loss of generality, let's assume that X is even (X = 2A) and Y is odd (Y = 2B + 1).
- The product Z = X _ Y = (2A) _ (2B + 1) = 4AB + 2A.
- Z is of the form 4AB + 2A, where both terms are even because they have a common factor of 2.
- Therefore, in Case 3, the product Z is even.

In summary:

- In Case 1 (both even), Z is even.
- In Case 2 (both odd), Z is odd.
- In Case 3 (one even and one odd), Z is even.

So, the parity of Z depends on the parities of X and Y as described above.
