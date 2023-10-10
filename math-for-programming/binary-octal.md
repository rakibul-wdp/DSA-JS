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
