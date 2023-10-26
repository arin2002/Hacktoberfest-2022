"use strict";

// Array methods

/*
1.forEach
2.map
3.filter
4.reduce
5.sort
6.find
7.every
8.some
9.fill
10.splice
 */

// 1. forEach() -> call back method

const numbers = [4, 5, 9, 7, 3];

function myFunc(number, index) {
  console.log(`index is ${index} number is ${number}`);
}

// for (let i = 0; i < numbers.length; i++) {
//   myFunc(numbers[i], i);
// }

// Work same as above loop
numbers.forEach(myFunc);

numbers.forEach(function (number, index) {
  console.log(`index is ${index} and number is ${number * 2}`);
});

const users = [
  { firstName: "Krunal", age: 20 },
  { firstName: "Gupta", age: 21 },
  { firstName: "Raman", age: 19 },
  { firstName: "Suresh", age: 22 },
];

users.forEach(function (name, index) {
  console.log(name.firstName, index);
});

// 2) map() -> callback function , creates new array everytime , use return keyword is necessary

const num = [4, 5, 8, 9, 1];

const square = function (num) {
  return num * num;
  //   console.log(num * num); // Give output but have some error
};

const squareNum = num.map(square);
console.log(squareNum);

const squareNum2 = num.map((num) => {
  return num * 2;
});

console.log(squareNum2);

const users2 = [
  { name: "Krunal", age: 22 },
  { name: "Mohit", age: 2 },
  { name: "Gupta", age: 72 },
  { name: "Aman", age: 2 },
];

const userNames = users2.map((users2) => {
  return users2.name;
});

console.log(userNames);

// 3) filter() -> call back function, return boolean value , new array created

const newNumber = [4, 9, 7, 3];

const isOdd = function (number) {
  return number % 2 !== 0;
};

const oddNumber = newNumber.filter(isOdd);
console.log(oddNumber);

const evenNumber = newNumber.filter((number) => {
  return number % 2 === 0;
});

console.log(evenNumber);

// 4) reduce() -> call back function

// aim:- sum of all numbers in array

const integer = [1, 2, 3, 4, 5, 10];

const sum = integer.reduce((accumulator, currentValue) => {
  return accumulator + currentValue;
}, 100); // Initial value is passed

console.log(sum);

// Dry run
// Accumulator , currentValue , return
// 1              2             3
// 3              3             6
// 6              4             10
// 10             5             15
// 15             10            25

const userCart = [
  { productID: 1, productName: "Mobile ", price: 12000 },
  { productID: 2, productName: "Laptop ", price: 22000 },
  { productID: 3, productName: "TV ", price: 120000 },
  { productID: 4, productName: "Headphone ", price: 2000 },
];

const totalAmount = userCart.reduce((totalPrice, currentProduct) => {
  return totalPrice + currentProduct.price;
}, 0);

console.log(totalAmount);

// Dry Run

// total price        currentValue      return
//  0                   12000               12000
// 12000                220000            340000
// 340000               120000            154000
// 154000               2000              156000

// 5. sort() -> Change(mutate) the original array
// In Js sort not work like usual sort it treats every element as String
// Work like dictionary and if capital letter is present then it will be in the beginning

// 0-9 [48-57] ,    A-Z [65-90] ,    a-z [97-122]

// Expected: [5,9,400,1200,3000]
const number3 = [5, 9, 1200, 400, 3000];
// ["5","9","400",1200","3000"]
// [53,57,49,52,51]     // Take only 1 for 1200

number3.sort();
console.log(number3);

const userNaam = ["Krunal", "gupta", "Aman", "Aditya", "Manish", "aryan"];

console.log(userNaam.sort());

// Sort the numbers originally

number3.sort((a, b) => {
  return a - b;
});

console.log(number3);

// Dry run this technique

// 1200, 400
// a-b ----> 700
// a-b ---> +ve(>0) ----> b,a
// 400 , 1200

// a-b ---> -ve(<0) ----> a,b
// 5, 9 ---> -4
// 5,9

// price lowToHigh  highTolow

const products = [
  { productID: 1, productName: "p1", price: 300 },
  { productID: 2, productName: "p2", price: 3000 },
  { productID: 3, productName: "p3", price: 200 },
  { productID: 4, productName: "p4", price: 8000 },
  { productID: 5, productName: "p5", price: 500 },
];

// lowToHigh

const lowToHigh = products.slice(0).sort((a, b) => {
  return a.price - b.price;
});

console.log(lowToHigh);

// highToLow

const highToLow = products.sort((a, b) => {
  return b.price - a.price;
});

console.log(highToLow);

// 6. find()-> call back function , Returns the value of the first element in the array where predicate is true, and undefined otherwise.

const animals = ["lion", "caty", "dog", "tiger"];

const ans = animals.find((string) => {
  return string.length === 3;
});
console.log(ans);

const user5 = [
  { userId: 1, userName: "Krunal" },
  { userId: 2, userName: "Gupta" },
  { userId: 3, userName: "Trent" },
  { userId: 4, userName: "Starc" },
  { userId: 5, userName: "Virat" },
];

console.log(user5.find((user) => user.userId === 3));

// 7. every() -> call back function
// Determines whether all the members of an array satisfy the specified test then shows true otherwise false.

const number7 = [2, 4, 6, 8, 10];

const ans7 = number7.every((number) => number % 2 === 0);
console.log(ans7);

const userCart7 = [
  { prodcutId: 1, productName: "Laptop", price: 49000 },
  { prodcutId: 2, productName: "Mobile", price: 5000 },
  { prodcutId: 3, productName: "Earbuds", price: 500 },
];

const answer = userCart7.every((cartItem) => cartItem.price <= 50000);
console.log(answer);

// 8. some() -> callback function ,Determines whether the specified callback function returns true for any element of an array.

// kya ek bhi number eisa hai jo even hai

const num8 = [3, 5, 8, 9];

console.log(num8.some((number) => number % 2 === 0));

const userCart8 = [
  { prodcutId: 1, productName: "Laptop", price: 49000 },
  { prodcutId: 2, productName: "Mobile", price: 5000 },
  { prodcutId: 3, productName: "Earbuds", price: 500 },
  { prodcutId: 4, productName: "Macbook", price: 200000 },
];

console.log(userCart8.some((cartItem) => cartItem.price > 200000));

// 9. fill() - > change the original array ,
// value , start , end

const myArray = new Array(10).fill(-1);
console.log(myArray);

const myArray2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const ans9 = myArray2.fill(0, 2, 5);
console.log(ans9);

// 10. splice() - > change the original array
// start , delete , insert

const arr10 = ["item1", "item2", "item3", "item4", "item5"];

// delete
const deletedItem = arr10.splice(1, 1);
console.log(arr10);
console.log(deletedItem);

// insert
arr10.splice(1, 0, "inserted item");
console.log(arr10);

// delete and insert simultaneously

arr10.splice(0, 2, "new item");
console.log(arr10);
