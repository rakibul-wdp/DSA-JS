/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
  return {
    increment: function () {
      let initialState = init;
      return ++initialState;
    },
    decrement: function () {
      let initialState = init;
      return --initialState;
    },
    reset: function () {
      return init;
    },
  };
};

const counter = createCounter(5);
console.log(counter.increment()); // 6
console.log(counter.increment()); // 7
console.log(counter.decrement()); // 4
console.log(counter.decrement()); // 3
console.log(counter.reset()); // 5
console.log(counter.reset()); // 5
