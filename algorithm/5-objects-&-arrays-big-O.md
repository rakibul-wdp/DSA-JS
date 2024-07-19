### Object - Big-O

- An object is a collection of key value pairs

```js
const person = {
  firstName: "Abul",
  lastName: "Babul",
};
```

- Insert - O(1)
- Remove - O(1)
- Access - O(1)
- Search - O(n)
- Object.keys() - O(n)
- Object.values() - O(n)
- Object.entries() - O(n)

### Array - Big-O

- An array is an ordered collection of values

```js
const odd = [1, 3, 5, 7, 9];
```

- Insert/remove at end - O(1)
- Insert/remove at beginning - O(n)
- Access - O(1)
- Search - O(n)
- Push/pop - O(1)
- Shift/unshift/concat/slice/splice - O(n)
- forEach/map/filter/reduce - O(n)
