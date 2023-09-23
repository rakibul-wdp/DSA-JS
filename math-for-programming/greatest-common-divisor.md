# Recap

- Floor vs Ceiling
- Counting number of divisors
- Improving our method
- Prime number check
- Sieve of Eratosthenes
- Digit extraction

# GCD - Greatest common divisor

- Divisor
- Common divisor
- Greatest common divisor
- Example: Find the gcd of 15 and 6
  - Divisors of 15: 1, 3, 5, 15
  - Divisors of 6: 1, 2, 3, 6
  - Common divisors: 1, 3
  - GCD: 3
- Co-prime: if gcd(a, b) = 1, a and b are co-prime.
  - Example: 8 and 15

# GCD - How to calculate?

- Simple way to find gcd(a, b)
  - Take i to be 1 to minimum (a, b)
    - Check if i divides both a and b
    - Largest such i is the gcd
  - Just like the naive method we learned for finding divisors
    - Too many unnecessary calculations
- Let's learn a clever way - The Euclidean Algorithm

# GCD - The euclidean algorithm

- gcd(a, b) = gcd(b, a%b)
- gcd(p, 0) = gcd(0, p) = p
- Example: gdc(15, 6) = gcd(6, 3) = gcd(3, 0) = 3
- Changing order does no matter
  - gcd(6, 15) = gcd(15, 6) = ...
- gcd(15, 8) = gcd(8, 7) = gcd(7, 1) = gcd(1, 0) = 1 -> Co - prime

# LCM - Least common multiple

- Multiple
- Common multiple
- Least common multiple
- Example: Find the lcm of 15 6
  - Multiples of 15: 15, 30, 45, 60, ...
  - Multiples of 6: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, ...
  - Common multiples: 30, 60, ...
  - LCM: 30

# LCM - How to calculate?

- Simple way to find lcm (a, b)
  - Take multiples of the larger number and see if the smaller one divides it
  - Computation heavy
- Or you may find it using gcd:
  - gcd(a, b) x lcm(a, b) = a X b
  - Example: lcm(15, 6) = (15x6)/3 = 30
