# Question 01:

- Consider the following sets
- U = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}
- A = {1, 2, 3, 4, 7}
- B = {3, 4, 5, 6}
- Find the set - (AUB)'
- Answer: {8, 9, 10, 11, 12, 13}

## Sets in Markdown

Consider the following sets:

- Universal Set (U): {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}
- Set A: {1, 2, 3, 4, 7}
- Set B: {3, 4, 5, 6}

### Finding the Union of Sets A and B

To find the union of sets A and B (\(A \cup B\)), we combine all unique elements from both sets:

\[ A \cup B = \{1, 2, 3, 4, 5, 6, 7\} \]

### Finding the Complement of \(A \cup B\)

To find the complement of the union of sets A and B, denoted as \((A \cup B)'\), we consider the universal set U and identify elements that are not in \(A \cup B\).

Universal Set U: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}

\[
(A \cup B)' = \{8, 9, 10, 11, 12, 13\}
\]

The complement \((A \cup B)'\) contains elements that are in the universal set U but not in the union of sets A and B.

# Question 02:

- Find the GCD and LCM of 77 and 121. Write the process in details.

## Finding the GCD and LCM of 77 and 121

### Finding the Greatest Common Divisor (GCD)

The GCD of two numbers is the largest positive integer that divides both numbers without leaving a remainder. To find the GCD of 77 and 121, we can use the Euclidean algorithm, which involves successive division and finding remainders.

Step 1: Divide 121 by 77:

- \(121 = 77 \times 1 + 44\)

Step 2: Divide 77 by 44:

- \(77 = 44 \times 1 + 33\)

Step 3: Divide 44 by 33:

- \(44 = 33 \times 1 + 11\)

Step 4: Divide 33 by 11:

- \(33 = 11 \times 3 + 0\)

At this point, we've reached a remainder of 0, which means that 11 is the GCD of 77 and 121.

So, GCD(77, 121) = 11.

### Finding the Least Common Multiple (LCM)

The LCM of two numbers is the smallest positive integer that is divisible by both numbers. To find the LCM of 77 and 121, we can use the formula:

\[
LCM(a, b) = \frac{{\left| a \times b \right|}}{{GCD(a, b)}}
\]

In this case, \(a = 77\) and \(b = 121\), and we've already found that \(GCD(77, 121) = 11\).

So, we can calculate the LCM as follows:

\[
LCM(77, 121) = \frac{{\left| 77 \times 121 \right|}}{{11}} = \frac{{9317}}{{11}} = 847
\]

So, LCM(77, 121) = 847.

We have successfully found the GCD and LCM of 77 and 121.

# Question 03

- In a cricket match, you have a squad of 15 players and you need to select 11 for a game. The two opening batsman are fixed and the rest of the players are flexible. How many batting orders are possible for the game?

## Cricket Batting Order Combinations

In a cricket match, you have a squad of 15 players, and you need to select 11 for a game. The two opening batsmen are fixed, and the rest of the players are flexible.

### Finding the Number of Batting Order Combinations

To calculate the number of possible batting orders for the game, we need to consider the fixed positions (opening batsmen) and the flexible positions (the remaining 9 players).

1. Fixed Positions (Opening Batsmen): There are 2 opening batsmen, and their positions are already determined.

2. Flexible Positions: The remaining 9 players can bat in various orders.

To find the number of batting order combinations, we calculate the permutations of the 9 flexible players in the remaining positions.

Number of flexible players = 9

Number of flexible positions available = 11 (total positions - 2 fixed positions)

Using the permutation formula:

\[
\text{Number of batting order combinations} = P(9, 11) = \frac{9!}{(9-11)!} = \frac{9!}{(-2)!} = \frac{9!}{1} = 9!
\]

Now, let's calculate it:

\[
9! = 9 \times 8 \times 7 \times 6 \times 5 \times 4 \times 3 \times 2 \times 1 = 362,880
\]

So, there are 362,880 possible batting order combinations for the game when the two opening batsmen are fixed, and the rest of the positions are flexible.

# Question 04

- Let's assume the length and width of the rectangle is X and Y.
  Area of two green circle = ( 3.1416 × (10 cm)^2 ) × 2 = 628.32 cm²
  So, Area of the yellow region outside of the circles = (X × Y) - (628.32 cm²)
  Ans: (X × Y) - (628.32 cm²).

# Question 05

- Find the 100th term of the following sequence
- 3, 10, 17, 24, ...
- Also find the sum of the first 100 terms.

## Sequence and Sum of Terms

Consider the sequence:

3, 10, 17, 24, ...

### Finding the 100th Term

To find the 100th term of the sequence, we can observe that the common difference between consecutive terms is 7 (each term increases by 7). Therefore, we can calculate the 100th term as follows:

\[ \text{Term}\_n = \text{Term}\_1 + (n - 1) \times \text{Common Difference} \]

Where:

- Term₁ (the first term) = 3
- Common Difference = 7
- n (the term number we want to find) = 100

Plugging in the values:

\[ \text{Term}\_{100} = 3 + (100 - 1) \times 7 = 3 + 99 \times 7 = 3 + 693 = 696 \]

So, the 100th term of the sequence is 696.

### Finding the Sum of the First 100 Terms

To find the sum of the first 100 terms of the sequence, we can use the formula for the sum of an arithmetic series:

\[ \text{Sum} = \frac{n}{2} \left(2a + (n - 1)d\right) \]

Where:

- n = 100 (number of terms)
- a = 3 (the first term)
- d = 7 (common difference)

Plugging in the values:

\[ \text{Sum} = \frac{100}{2} \left(2 \times 3 + (100 - 1) \times 7\right) = 50 \left(6 + 99 \times 7\right) = 50 \left(6 + 693\right) = 50 \times 699 = 34,950 \]

So, the sum of the first 100 terms of the sequence is 34,950.
