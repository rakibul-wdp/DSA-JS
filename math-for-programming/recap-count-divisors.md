# Necessary recap

- Real number, Integer, Natural number and more
- Divisor, dividend, quotient, remainder
- Factor
- Prime number
- Even vs odd

### Floor, Ceiling, Round

- Floor: Nearest integer below
- Ceiling: Nearest integer above
- Round: Nearest integer
- 12.65 -> Floor: 12, Ceiling: 13, Round: 13
- 9.21 -> Floor: 9, Ceiling: 10, Round: 9
- 24 -> Floor: 24, Ceiling: 24, Round: 24

### Divisor Counting

- Problem statement: Given an integer n. How many divisors are there for n?
- You know the answer if n is a prime, right?
  - Example: 3, 11, 73, etc
- What about if it is not a prime number? How do you count divisors?
  - Example: 8, 15, 27, etc

### Divisor counting - Naive

- Take all the integers (1 to n) and test if remainder is 0.
  - Example: Let's take 12
  - The divisors: 1, 2, 3, 4, 6, 12
  - Number of divisors: 6

### Divisor counting - Better

- We already know 1 and n will be there?
- So, 2 to (n - 1) need to be tested.
- But ... look at the second half!
- We only need to check for 2 to n/2
- What about odd n?

### Divisor counting - Even Better

- Could you stop earlier than 6?
- Yes!
- 12%2 = 0 means 12/2 = 6 also divides 12
- Same goes for 3 and 4
- So, we could stop at 3 and still identify all the divisors!
- Then where do I stop?
- For 12, we stopped at 3.
- Let's look at 16
- So, we don't need to test any number greater than root n
- root 12 = 3.464 ..., root 16 = 4
