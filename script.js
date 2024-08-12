function createAdded(a) {
  function f(b) {
    const sum = a + b;
    return sum;
  }
  return f;
}

const f = createAdded(3);
console.log(f(4));
