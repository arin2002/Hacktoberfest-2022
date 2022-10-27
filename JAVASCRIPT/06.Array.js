"use strict";

// Array is reference data type of ordered collection of items
// Array is mutable

// Array Declaration

const arr = Array();
// let arr = new Array();
// const arr = [];

let fruits = ["apple", "mango", "guava"];
console.log(fruits);
fruits[1] = "banana";
console.log(fruits);

let numbers = [1, 2, 3, 4];
console.log(numbers[3]);

let mixed = [1, 2, 3, "one", "two", 2.2, null, undefined];
console.log(mixed);

console.log(typeof fruits);
console.log(Array.isArray(fruits));

const arrr = [
  "Asabeneh",
  250,
  true,
  { country: "Finland", city: "Helsinki" },
  { skills: ["HTML", "CSS", "JS", "React", "Python"] },
];
console.log(arrr);

// Creating array using split() function:-

let js = "javascript";
let quotesInjs = js.split("");
console.log(quotesInjs);

let obj = {}; // Object literal
console.log(typeof obj);
console.log(Array.isArray(obj));

// Use const keyword to made array or referance data types
// heap memory [0,1,2]

const number = [1, 2, 3, 4];
number.push(6);
console.log(number);

// Pop and push methods

// push--> Add elements at last index
fruits.push("grapes");
console.log(fruits);

// pop --> Remove elements from last index

let poppedFruits = fruits.pop();
console.log(fruits);

console.log("Elements poped out from array is", poppedFruits);

// Shift and Unshift methods

// unshift --> Add elements at starting position
fruits.unshift("watermelon");
fruits.unshift("muskmelon");
console.log(fruits);

// shift --> Remove elements at starting position
let shitftElement = fruits.shift();
console.log(fruits);
console.log("Shifted elements from array is ", shitftElement);

// Note:- push and pop methods is faster than shift and unshift method as shift methods has to store the entire array in another place

// Array Methods

// cloning and concating the array

let array1 = ["item1", "item2"];
// let array2 = ["item1","item2"];

// let array2 = array1.slice(0).concat(["item3","item4"]);         // 1st Method
// let array2 = [].concat(array1,["item4","item5"]);            // 2nd Method

// Spread operator used to clone the array
let newArray = ["Immuttable"];
let array2 = [...array1, "item3", "item5", ...newArray]; // 3rd Method

console.log(array1 === array2);
console.log(array1);
console.log(array2);

const number8 = [..."1234566990"];
console.log(number8);

// for loop in array

let fruits1 = ["grapes", "mango", "banana"];

let fruits2 = [];

for (let i = 0; i < fruits1.length; i++) {
  fruits2.push(fruits1[i].toUpperCase());
}

console.log(fruits2);

// for of loop

const fruits3 = ["mango", "banana", "watermelon", "apple"];

for (let fruit of fruits3) {
  console.log(fruit.toUpperCase());
}

// for in loop

for (let index in fruits3) {
  console.log(index, fruits3[index].toUpperCase());
}

// Array destructuring

const myArray = ["value1", "value2", "value3", "value4", "value5"];

// let var1 = myArray[0];
// let var2 = myArray[1];
// console.log(var1);
// console.log(var2);

let [var1, , var2, ...myNewArray] = myArray;
console.log("value of var1 ", var1);
console.log("value of var2", var2);
console.log(myNewArray);
