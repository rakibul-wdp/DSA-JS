/*
Linear search

Problem: Given an array of 'n' elements and a target element 't', find the index of 't' in the array. Return -1 if the target element is not found.

arr = [-5, 2, 10, 4, 6], t = 10 -> should return 2
*/

function findElement(arr, t) {
  let foundedElement = -1;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === t) foundedElement = i;
  }

  return foundedElement;
}

console.log(findElement([-5, 2, 10, 4, 6], 6));