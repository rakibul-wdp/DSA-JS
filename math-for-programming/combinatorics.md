# Recap

- Unitary method and percentage
  - Solving problems
- Interest rate and related problems
- Mean and Median

# Combinatorics

- Number of ways to choose or arrange objects
- Arranging some objects in all possible orders
  - Remember factorial?
- Choose some objects out of a collection of objects
  - Combination problem
  - How many ways are there to choose r objects from a collection of n objects?
    - nCr = ?
- Choose and order some objects out of a collection of objects
  - Permutation problem
  - How many ways are there to arrange r objects from a collection of n objects?
    - nPr = ?

# nPr

- You have n object in hand (all different)
- You have r slots to put them (r <= n) in order
- Example:

  - Batting order of a 11 player cricket match from a squad of 15 players
  - Answering order in an exam to answer 4 out of 6 questions
  - Number of ways: 6 x 5 x 4 x 3 = 360
  - But could we write this?
    - (6x5x4x3x2x1)/(2x1) = 6!/2!

- You have n objects in hand (all different)
- You have r slots to put them (r <= n) in order
- Generalize the formula
- Number of permutation: nx(n - 1)x(n - 2)x...x(n - 4 + 1)
- nx(n-1)x(n-2)x...x(n-4+1)x(n-r)x...x1/(n-r)x...x1 => n!/(n-r)!

- Batting order of a 11 player cricket match from a squad of 15 players?
- r = 11, n = 15
- nPr = n! / (n-r)!
- nPr = 11! / (15-11)!
- nPr = 1663200

# nCr

- You have n object in hand (all different)
- You have r slots to put them (r <= n) [order does not matter]
- Choosing objects instead of arranging them
- Example

  - Choosing 11 players from a squad of 15 players
  - Answering combinations in an exam to answer 4 out of 6 questions
  - We already know how many ways are there if the order is considered too (nPr = 6P4)
  - Here: 2 -> 3 -> 1 -> 6 is same as 1 -> 2 -> 6 -> 3 as we only need the choice (without order)
  - How many orders are possible with a fixed set of 4 questions?
    - 4!
    - All of them should be count as one combination
    - So, we can just divide the permutations by 4!

- You have n objects in hand (all different)
- You have r slots to put them (r <= n) [order does not matter]
- Generalize the formula
- Number of permutation: nPr = nx(n - 1)x(n - 2)x...x(n - 4 + 1)
- Each r! corresponds to the same choice
- nCr = nPr/r! = n!/r!(n-r)!
