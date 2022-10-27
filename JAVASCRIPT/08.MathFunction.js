"use strict";

const PI = Math.PI;
console.log(PI);

console.log(Math.E)

// Rounding off to the closest number
// if above .5 up if less 0.5 down rounding

console.log(Math.round(PI));
console.log(Math.round(2.434));

// Floor function is the greatest integer that is less than or equal to x
console.log(Math.floor(PI));

// Ceiling function is the least integer that is greater than or equal to x
console.log(Math.ceil(PI));

console.log(Math.min(2,3,5,1,6,9));
console.log(Math.max(6,2,7,6));


// Absoulte value
console.log(Math.abs(-PI));

// Square root 
console.log(Math.sqrt(4));

// Power
console.log(Math.pow(4,2));

// Logarithm
// -> Returns the natural log with base E of x, Math.log(x)

console.log(Math.log(2));
console.log(Math.log(10));

// -> Returns the natural log of 2 and 10 
console.log(Math.LN2);
console.log(Math.LN10);


// Trigo 

console.log(Math.sin(0));
console.log(Math.sin(60));
console.log(Math.cos(0));
console.log(Math.tan(90));


// Random Number 

// Creates random number b/w 0 to 0.999999
const randNum = Math.random();
console.log(randNum);


// Create random number b/w 0 to 10
const num = Math.floor(Math.random() * 11);
console.log(num);