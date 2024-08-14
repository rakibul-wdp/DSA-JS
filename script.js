function createAdder(a) {
  return function add(b) {
    const sum = a + b;
    return sum;
  };
}

const res = createAdder(2);
console.log(res(3));
