"use strict"
/*
  Arrays are not sufficient to represent real world data, and therefore objects come into picture.
  Objects are also reference type
  Objects stores key value pairs 
  Objects don't have index
*/

//Create an object
const person = {
    name: "Deepti Mittal",
    age: 20,
    rollNo: 44,
    course: "B.Tech",
    marks: [98, 99, 100, 96, 97]
};

// How to access data from objects
// 1st) Dot notation
console.log(person.name);
// 2nd) Bracket Notation:
console.log(person["age"]); // write key name in bracket as string


// Add more key-value pair(s) in existing object
person.gender = "Female";
console.log(person);

person["hobbies"] = ["Sleeping", "Listening to music"];
console.log(person);

// if the key name contains spaces in between then we cannot use dot notation, we have to use bracket notation in this case.
// Example:
person["fav color"] = "idk";
console.log(person["fav color"]);

const key1 = "email";
person[key1] = "abc123@gmail.com";

// objects are not iterable but we can iterate through object's key and values
// How to iterate through an object ==>
// 1) Using 'For in' loop
for( let key in person){
    console.log(key + " : " + person[key]);
}
for(let key in person){
    console.log(` ${key} : ${person[key]}`);
}

// 2) using Object.keys and for of loop
for(let key of Object.keys(person)){
    console.log(person[key]);
}


