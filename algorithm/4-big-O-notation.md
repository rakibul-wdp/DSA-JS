### Big-O Notation

- The worst case complexity of an algorithm is represented using the Big-O notation
- Big-O notation describes the complexity of an algorithm using algebraic terms
- It has two important characteristics

  - It is expressed in terms of the input
  - It focuses on the bigger picture without getting caught up in the minute details

- ```js
  function summation(n) {
    // n = 4
    let sum = 0; // 1
    for (let i = 1; i <= n; i++) {
      sum += i; // 4
    }
    return sum; // 1
  }
  ```
- n + 2 | It is expressed in terms of the input