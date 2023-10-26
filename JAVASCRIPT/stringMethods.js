// trim() => removes extra spaces from string
// toUpperCase()
// toLowerCase()
// slice

"use strict"

let firstName = " Deepti   "; //extra spaces in string
console.log(firstName.length); // length : 10

firstName.trim(); // Deepti 
console.log(firstName); //strings are immutable so it will print " Deepti   ";

firstName = firstName.trim(); // or create a new variable and store firstName.trim() value in it
console.log(firstName.length); //length = 6
console.log(firstName);

console.log(firstName.toUpperCase());
console.log(firstName.toLowerCase());

//slice method: [start, end);
// start index and end index 
 
let newString = firstName.slice(0,3); // Dee and not Deep
console.log(newString);
newString = firstName.slice(0,4); // Deep (end index -1 tk jata h)
console.log(newString);

