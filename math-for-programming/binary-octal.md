# Binary <-> Octal

- Remember binary to decimal?
- Easier than that
- 8 and 16 are powers of 2, 10 is not!
  - 8 = 2^3 and 16 = 2^4
- 000 to 111 => 0 to 7 (Octal)
- 0000 to 1111 => 0 to F (Hexadecimal)
- Binary 10111011 to octal?
  - 010 111 011 => 273
- Octal 314 to binary?
  - 314 => 011 001 100

# Summary

- Combinatorial problems
  - Choice / Combination / nCr
  - Arrangement / Permutation / nPr
- Probability
- Number system revisited

# Practice Day

- Convert this binary number to hexadecimal number
  - 01110100111011
- Binary: 0111 0100 1110 11
- Now, convert each group into hexadecimal:
- 0111 = 7 in hexadecimal
- 0100 = 4 in hexadecimal
- 1110 = E in hexadecimal
- 11 = 3 in hexadecimal
- So, the hexadecimal representation of the binary number 01110100111011 is 74E3.

- Convert this octal number to hexadecimal number
  - 127416
- Convert octal to binary:
- 1 (octal) = 001 (binary)
- 2 (octal) = 010 (binary)
- 7 (octal) = 111 (binary)
- 4 (octal) = 100 (binary)
- 1 (octal) = 001 (binary)
- 6 (octal) = 110 (binary)

- So, the binary representation of the octal number 127416 is 00101011110000110.

- Now, group the binary digits into sets of four, starting from the right (adding leading zeros if necessary):

  - 00 1010 1111 0000 110

- Convert each group of four binary digits into hexadecimal:
- 0010 = 2 in hexadecimal
- 1010 = A in hexadecimal
- 1111 = F in hexadecimal
- 0000 = 0 in hexadecimal
- 110 = 6 in hexadecimal (with leading zeros dropped)

- So, the hexadecimal representation of the octal number 127416 is 2AF06.

- If you throw a dice and toss a coin at the same time, what is the probability that you will get head (coin) and value less than 3 (dice)?
- When throwing a fair six-sided die and flipping a fair coin simultaneously, let's consider the outcomes for each event:

- For the die:

  - There are 6 possible outcomes: 1, 2, 3, 4, 5, and 6.

- For the coin:

  - There are 2 possible outcomes: Heads (H) or Tails (T).

- To find the probability of getting a head (H) on the coin and a value less than 3 on the die (i.e., a 1 or a 2), we need to calculate the probability of each event separately and then multiply them because the events are independent.

- Probability of getting a head on the coin (H) = 1/2 (since there are 2 equally likely outcomes, and H is one of them).

- Probability of getting a value less than 3 on the die (1 or 2) = 2/6 = 1/3 (since there are 2 successful outcomes out of 6 equally likely outcomes).

- Now, multiply the probabilities of the two independent events to find the overall probability:

- P(H and value less than 3) = P(H) _ P(value less than 3) = (1/2) _ (1/3) = 1/6

- So, the probability of getting a head (coin) and a value less than 3 (dice) is 1/6.
