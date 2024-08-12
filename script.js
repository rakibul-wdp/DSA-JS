function f(...args) {
  console.log(args);
  const sum = args[0] + args[1];
  return sum;
}
console.log(f(3, 4));
