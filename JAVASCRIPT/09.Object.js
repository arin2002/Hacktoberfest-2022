"use strict";

// Object is referance data type
// Arrays are good but not sufficient for real world data 
// Objects store key value pairs
// Objects don't have index


// Creation of objects
const person = {name:"Krunal",age:20};
console.log(person,typeof person);
console.log(person.name);
console.log(person.age);


const people = {
    "name":"Gupta",
    "age": 20, 
    "hobbies": ["Cricket", "Sleeping", "Learning"]
};

// Accessing data from objects
console.log(people);
console.log(people.hobbies);
console.log(people.name);
console.log(people["name"]);        // Another method

// Adding key value pairs 
people.gender = "Male";
people["gender"] = "Male";          // Another method
console.log(people);


// Difference b/w dot notation and bracket notation

let key = "email";
const people1 = {
    "name":"Gupta",
    "age": 20, 
    "person hobbies": ["Cricket", "Sleeping", "Learning"]
};

// console.log(people.person hobbies);         // This will throw error
console.log(people1["person hobbies"]);

people1[key] = "krunalrgupta15@gmail.com";
console.log(people1);

// How to iterate the objects
// --> for in loop 
// --> Object.keys

const person1 = {
    "name": "Krunal Gupta",
    age : 20,
    "Gender": "Male",
    "Personal Hobbies":["Sleeping", "Learning","Cricket", "Learing"]
};

for(let key in person1){
    // console.log(key);
    // console.log(person1[key]);
    // console.log(key ," : ",person1[key]);
    // console.log(`${key} : ${person[key]}`);
}


console.log(Object.keys(person1));

for(let key of Object.keys(person1)){
    console.log(person1[key]);
}

// Computed Properties 

let key1 = "objkey1";
let key2 = "objkey2";

let value1 = "myvalue1";
let value2 = "myvalue2";


// We have to print like this using variables 
// const obj = {
//     "objkey1":"myvalue1",
//     "objkey2":"myvalue2"
// };

// 1st Method 
const obj = {
    [key1] : value1,
    [key2] : value2
};
console.log(obj);


// 2nd Method 
const obj2 = {};

obj2[key1] = value1;
obj2[key2] = value2;

console.log(obj2);


// Spread Operator in Objects 

const objectName1 = {
    key1 : "value1",
    key2 : "value2"
};

const objectName2 = {
    key1 : "new value",             // This will override the upper value1
    key3 : "value3",
    key4 : "value4"
};

const newObject = {...objectName1, ...objectName2, key69:"value69" };
console.log(newObject);

const newObject1 = {..."abc", ...["fdj","vlf"]};
console.log(newObject1);

// Object Destructuring

const band = {
    bandName : "rockon", 
    famousSong : "Night changes",
    year: 1899,
    anotherSong : "kusu kusu"
};

// const bandName = band.bandName;
// const famousSong = band.famousSong;
// console.log(bandName, famousSong);
// --> This can be written in JS as 

let {bandName, famousSong: var8, ...otherDetails} = band;          // This bandName and famousSong will work as variables
console.log(bandName, var8);
console.log(otherDetails);


