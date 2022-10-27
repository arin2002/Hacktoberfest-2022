"use strict"
const prn = (value = "-------------") => console.log(value);

// SETS (iterable)
// store data
// sets also have its own methods
// no index-based access
// order is not guaranteed
// unique items only (no duplicates allowed)

const numbers = new Set([1,2,2,3]); // syntax
//note: we can only add elements through an iterable like array i.e we cannot add like this --> myset = new Set(1,2,3)
prn(numbers);
// we can also create empty set and add values using add method
const num = new Set();
num.add(4);
num.add(3);
prn(num);

let fruits = ['Apple','Mango','Papaya'];
const mySet = new Set(fruits);
mySet.add(40);
mySet.add(20);
prn(mySet);

// Important note: we cannot add duplicate elements in a set but
// we can add duplicate array by using the following approach

const importantConcept = new Set([['Apple','Mango'],['Apple,Mango'],33]);
prn(importantConcept);
// kyunki ye dono arrays memory me alag alag jagah hain aur javascript ke perspective se different h

// check if an element is present in set or not ---> has method
if(numbers.has(20))prn("20 is present in set")
else prn("20 is not present in the set")

// since set is iterable , we can use for of loop
for(let num of numbers){
    prn(`${num*num}`);
}

const array1 = [1.22,23,22,88,22,11,13,1,1,23,22,77];
const uniqueElements = new Set(array1);
prn(uniqueElements);

// note : we cannot use array function over uniqueElements as its a set and not array
// to get the length of uniqueElements -->
let len = 0;
for(let elem of uniqueElements){
    len++;
}
prn(len);