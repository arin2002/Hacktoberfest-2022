"use strict";

// Iterables
// - jispe hum for of loop laga sakein
// - Eg:- String , Array are iterables

// 1. Sets
// 2. Map

const firstName = "Krunal";

for (let char of firstName) {
  console.log(char);
}

const arr = ["arr1", "arr2", "arr3"];

for (let item of arr) {
  console.log(item);
}

// for of loop is not valid for objects

// const demo = { key1: "value1", key2: "value2", key3: "value3" };

// for (let item of demo) {
//   console.log(item);
// }

// 1. sets ->

// - Sets(it is iterable)
// -store data of same or different data types
// -sets also have its own methods
// -Order is not guarnteed
// -No index-based access
// -unique items only (no duplicate allowed)      --> Main difference b/w sets and array

const numbers = new Set([1, 2, 3, 3]);
console.log(numbers);
console.log(numbers[2]); // Not valid in sets

const string = new Set("abcd0");
console.log(string);

const item = ["item1", "items2", "item3", "item4"];
const sets = new Set();
sets.add(1);
sets.add(2);
sets.add(2);
sets.add(3);
sets.add(4);
sets.add(5);
sets.add(6);
sets.add(["item1", "items2"]);
sets.add(["item1", "items2"]);
sets.add(item);
console.log(sets);

if (sets.has(1)) {
  console.log("1 is present");
} else {
  console.log("1 is not present");
}

for (let loop of sets) {
  console.log(loop);
}

const array = [1, 2, 3, 4, 4, 5, 5, 6, 6, 4, 7, 80];
const uniqueElements = new Set(array);
console.log(uniqueElements);
console.log(array);
console.log(uniqueElements.length); // Not valid in sets

let length = 0;

for (let element of uniqueElements) {
  length++;
}
console.log("length of uniqueElements is " + length);

// 2. maps ->

// map is iterable
// store data in ordered fashion
// store key value pair (like objects)
// duplicate keys are not allowed like objects

// difference b/w maps and objects
// -objects can only have string or symbol as key
// -in maps you can use anything as key
// like array, number, string

const person = new Map();
person.set("firstName", "Krunal");
person.set("age", 9);
person.set(1, "one");
person.set([1, 2, 3], "onetwothree");
person.set({ 1: "one" }, "one");
console.log(person);

console.log(person.firstName); // Not valid in maps

console.log(person.get("firstName"));
console.log(person.keys());

for (let key of person.keys()) {
  console.log(key, typeof key);
}

for (let [key, value] of person) {
  console.log(key, value);
}

const newMap = new Map([
  ["firstName", "Krunal"],
  ["age", 9],
]);
console.log(newMap);

const person1 = {
  firstName: "Krunal",
  id: 1,
};

const person2 = {
  firstName: "Gupta",
  id: 2,
};

const extraInfo = new Map();
extraInfo.set(person1, { age: 8, gender: "male" });
console.log(extraInfo);

console.log(person1.id);
console.log(extraInfo.get(person1));
console.log(extraInfo.get(person1).gender);

extraInfo.set(person2, { age: 2, gender: "female" });
console.log(extraInfo.get(person2).gender);

// ------------------------------------------------------------------------------------------------------//

// Array like object
// - Jinke pass length property hoti hai
// - aur jinko hum index se access kar sakte hai
// Eg:- String

const name = "Krunal";
console.log(name.length);
console.log(name[2]);

// Optional Chaining

const users = {
  firstName: "Krunal",
  // address: { houseNumber: "13" }
};

console.log(users.firstName);

// Shows error
// console.log(users.address.houseNumber);

// This will not create error
console.log(users.address);

// Solution
console.log(user?.address?.houseNumber);
