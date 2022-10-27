"use strict";

// Methods
// - function inside object

const person = {
  firstName: "Mohit",
  age: 20,
  about: function () {
    console.log(`Person name is ${this.firstName} and age is ${this.age}`);
    console.log(this);
    console.log(this.firstName, this.age);
  },
};

console.log(person.about);

person.about();

function personInfo() {
  console.log(`Person name is ${this.firstName} , and age is ${this.age}`);
}

const person1 = {
  firstName: "Krunal",
  age: 20,
  about: personInfo,
};

const person2 = {
  firstName: "Trent",
  age: 30,
  about: personInfo,
};

console.log(personInfo);

person1.about();
person2.about();

// this keyword
// - this and window are same

console.log(this);
console.log(window);
console.log(this === window);

function myFunc() {
  console.log("this");
}
myFunc();
window.myFunc();
