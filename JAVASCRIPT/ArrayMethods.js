"use strict"
let fruits = ["Apple","Mango","Grapes"];

let obj = {}; //object literal
console.log(typeof fruits); //object --> since array is a reference data type
console.log(Array.isArray(fruits)); //true --> it is used to check if the given variable stores an array

//push --> adds new element at the end of array
fruits.push("Banana");
console.log(fruits);

// pop --> removes last element and also returns it
let lastFruit = fruits.pop();
console.log(fruits);
console.log(lastFruit);

// unshift --> adds element in starting
fruits.unshift("banana");
fruits.unshift("berry");
console.log(fruits); 

//shift --> removes element from beginning and returns it
let remove = fruits.shift();
// Note: push and pop are faster than unshift and shift


//how to clone an Array
let array1 = ["item1","item2"];
let array2 = array1; //shallow copy, both array1 and array2 points to the same address in the memory
console.log(array1 === array2); // true

//use slice method to make a copy of array1
let array3 = array1.slice(0); // that is copy elements from index 0 to end
//another method to clone an array --> spread operator
let array4 = [...array1, "new element"];

let array5 = array1.slice(0).concat("item3","item4");
let array6 = [].concat(array1,"item5","item6");

let array7 = [...array1,...array6];

//const for creating array

const vegatables = ["Potato","Spinach"];
vegatables.push("Tomato");
console.log(vegatables);
//we can push or pop elements from a const array but cannot re-initalise it (since const array variable stores the address of array in heap and once stored it cannot be changed)
// vegatables = ["Hello","World"]; // Error--> assignment to constant variable

// "for of" loop --> works on value of array elements

for(let fruit of fruits){
    console.log(fruit); 
}

// "for in" loop --> works on index of array elements

for(let index in fruits){
    console.log(index + " " + fruits[index]); 
}


