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

# Question 06

- Two taps, T1 and T2 can fill and empty tank in 20 minutes and 15 minutes, respectively. They both were turned on to fill the tank, but tap T1 was turned off after some time, and tap T2 took 10 minutes to fill the tank. Find out after how much time tap T1 was turned off?

## Problem Solving with Taps

Two taps, T1 and T2, can fill and empty a tank at different rates. T1 can fill the tank in 20 minutes, and T2 can fill the tank in 15 minutes. They were both turned on to fill the tank, but tap T1 was turned off after some time, and it took tap T2 a total of 10 minutes to fill the tank completely. We want to find out after how much time tap T1 was turned off.

### Solution

To solve this problem, we can use the concept of rates. The rates of T1 and T2 are inversely proportional to the time it takes for each tap to fill or empty the tank.

- Tap T1 can fill the tank in 20 minutes, so its rate is \(R1 = \frac{1}{20}\) tanks per minute.
- Tap T2 can fill the tank in 15 minutes, so its rate is \(R2 = \frac{1}{15}\) tanks per minute.

When both taps are turned on together, their combined rate is the sum of their individual rates:

Combined Rate (T1 and T2) = \(R1 + R2 = \frac{1}{20} + \frac{1}{15}\)

After calculating the combined rate, we find that it's \(\frac{7}{60}\) tanks per minute.

Since T2 took 10 minutes to fill the tank at this combined rate, we calculate the work done during this time:

Work = Rate × Time
Work = \(\frac{7}{60}\) tanks/minute × 10 minutes = \(\frac{7}{6}\) tanks

The remaining work to be done by T1 is the total work minus the work done by T2:

Remaining Work by T1 = Total Work - Work done by T2
Remaining Work by T1 = 1 tank - \(\frac{7}{6}\) tanks = \(\frac{1}{6}\) tanks

Using the rate of T1 (\(R1 = \frac{1}{20}\) tanks per minute), we can calculate the time it took T1 to do this remaining work:

Time = \(\frac{\text{Work}}{\text{Rate}}\)
Time = \(\frac{\frac{1}{6}\) tanks}{\(\frac{1}{20}\) tanks per minute}
Time = \(\frac{1}{6} \times 20\) minutes
Time = \(3 \frac{1}{3}\) minutes, which is equivalent to 3 minutes and 20 seconds.

Therefore, tap T1 was turned off after 3 minutes and 20 seconds.

# Question 07

- Your friend deposited 10,500 BDT in a bank and received 12,150 BDT in total after 3 years.
- You deposited 15,100 BDT in another bank and received 18,755 BDT in total after 5 years.

## Investment Growth Comparison

### Your Friend's Investment

- Initial Deposit: 10,500 BDT
- Investment Duration: 3 years
- Total Amount Received: 12,150 BDT

Your friend deposited 10,500 BDT in a bank and received a total of 12,150 BDT after 3 years.

### Your Investment

- Initial Deposit: 15,100 BDT
- Investment Duration: 5 years
- Total Amount Received: 18,755 BDT

In comparison, you deposited 15,100 BDT in another bank and received a total of 18,755 BDT after 5 years.

It appears that your investment yielded a higher return compared to your friend's investment over a longer duration.

# Question 08

- Convert the hexadecimal number denoted by A1E7 to an octal number.

## Hexadecimal to Octal Conversion

To convert the hexadecimal number A1E7 to octal, follow these steps:

1. Convert A1E7 to binary:

   - A1E7 = 10100001110111 in binary

2. Group the binary digits in sets of three, starting from the right:

   - 101 000 011 101 11

3. Convert each group of three binary digits to octal:
   - 101 (in binary) = 5 (in octal)
   - 000 (in binary) = 0 (in octal)
   - 011 (in binary) = 3 (in octal)
   - 101 (in binary) = 5 (in octal)
   - 11 (in binary) = 3 (in octal)

So, the octal representation of the hexadecimal number A1E7 is 50353.

# Question 09:

- You have two boxes, box A and box B.

- In box A, there are 5 red balls and 10 green balls.
- In box B, there are 3 red balls and 7 green balls.
- If you pick a ball from box A, what is the probability that this is a red ball?
- If you pick a ball from box B, what is the probability that this is a red ball?

- If you pick one from A and one from B, what is the probability that both of them are red balls?

## Probability Questions with Two Boxes

You have two boxes, box A and box B, each containing both red and green balls.

- In box A, there are 5 red balls and 10 green balls.
- In box B, there are 3 red balls and 7 green balls.

### Probability of Drawing a Red Ball from Box A

To find the probability of drawing a red ball from box A, you can use the formula for probability:

\[
\text{Probability of red ball from A} = \frac{\text{Number of red balls in A}}{\text{Total number of balls in A}} = \frac{5}{5 + 10} = \frac{5}{15} = \frac{1}{3}
\]

So, the probability of drawing a red ball from box A is 1/3.

### Probability of Drawing a Red Ball from Box B

Similarly, to find the probability of drawing a red ball from box B:

\[
\text{Probability of red ball from B} = \frac{\text{Number of red balls in B}}{\text{Total number of balls in B}} = \frac{3}{3 + 7} = \frac{3}{10}
\]

So, the probability of drawing a red ball from box B is 3/10.

### Probability of Drawing Both Red Balls, One from A and One from B

To find the probability of drawing a red ball from both box A and box B, you multiply the probabilities of these two events because they are independent:

\[
\text{Probability of both being red} = \left(\frac{1}{3}\right) \times \left(\frac{3}{10}\right) = \frac{1}{3} \times \frac{3}{10} = \frac{1}{10}
\]

So, the probability of drawing a red ball from both box A and box B is 1/10.
