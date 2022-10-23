"use script"
const prn = (value = "-------------") => console.log(value);

// Map --> stores key-value pairs in ordered fashion

// Difference between Map and object
// Keys in object can only be of type string or Symbol
// But keys in Map can be of any type

// create Map
const person = new Map();
person.set('firstName','Deepti');
person.set('age',20);
person.set(1,'one');

// prn(person);

prn(person.get(1));
prn(person.get('age'));

person.set([1,2,3],'oneTwoThree');
person.set({5:'five'},'an object literal');
prn(person);

// we can list all the keys by using -->
prn(person.keys());

// for of loop on map
for(let key of person.keys()){
    console.log(key,typeof key);
    prn(`${person.get(key)}`);
} 

const myMap = new Map();
myMap.set('name','Pranshu');
myMap.set('Age',14);
myMap.set('gender','male');

for(let key of myMap){
    console.log(key);
    console.log(Array.isArray(key));
}

// Destructure the key-value pairs in map
for(let [key,value] of person){
    console.log(key,value);
}

// just like set we can add elements in map while creating 
const users = new Map([['firstName','Deepti'],['Age', 20]]);
prn(users);
prn();
// Practical Application to understand better

const person1 = {
    id: 44,
    name: 'Deepti', 
}
const person2 = {
    id: 45,
    name: 'Dishita',
}
const confidentialInfo = new Map();
confidentialInfo.set(person1,{password: '#34@123'});
confidentialInfo.set(person2,{password: '12%43#2'});
console.log(confidentialInfo);