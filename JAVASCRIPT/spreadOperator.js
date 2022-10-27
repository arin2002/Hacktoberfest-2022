"use strict"
// spread operator
const array1 = [1,2,3];
const array2 = [5,6,7];
const newArray = [...array1,...array2];
console.log(newArray);
//if we don't use spread operator i.e (...)
const check = [array1,array2, 90];
console.log(check);

// we can also spread a string into characters using spread operator
const spreadString = [..."abc"];
console.log(spreadString);
//note: only iterable values can be spreading like array, objects and string

// spread operator for objects
const object1 = {
    key1 : "Hello",
    key2 : "World"
}

const object2 = {
    key1 : "Namaste",
    key4 : "India"
}

const newObj = {...object1, ...object2}; 
console.log(newObj); // key1: "Namaste" , key2: World, key3: India

// note: two values of same key cannot exist in an object
// in such cases, the later value is considered

// Spread string and make it an object using spread operator (index becomes key and characters becomes value)
const obj3 = {..."abc"};
console.log(obj3);
//Similarly we can do this for array elements as well
const obj4 = {...["item1","item2"]};
console.log(obj4);
const characters = {..."abcdefghijklmnopqrstuvwxyz"};
console.log(characters);