/**
 * @param {number} n
 * @return {Function} counter
 */

var createCounter = function (n) {
  let i = n;
  return function () {
    return (i += 1);
  };
};

const counter = createCounter(3);
console.log(counter());
console.log(counter());
console.log(counter());

/**
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
