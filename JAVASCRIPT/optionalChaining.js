"use strict"
// Optional chaining

// The optional chaining operator (?.) accesses an object's property or calls
// a function. If the object is undefined or null, it returns undefined 
// instead of throwing an error.

// this method is useful in react.js project
const user = {
    firstName: "Deepti",
    address: { houseNumber: '1234' },
}
console.log(user?.firstName);
console.log(user?.address?.houseNumber);