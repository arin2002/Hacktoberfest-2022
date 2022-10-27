let fruits = ["Apple", "Mango", "Grapes"];
// Array destructuring
// lets store array elements in variable
// Approach1:
let myvar1 = fruits[0];
let myvar2 = fruits[1];
let myvar3 = fruits[2];

// Another way to do this:
let [var1, var2, var3] = fruits;
console.log(var1);
console.log(var2);
console.log(var3);
var1 = "value changed"; //i.e var1,var2 and var3 are normal variables and can be used like other variables

// if we want to assign values to var1 and var3 but not var2
let [v1, , v3] = fruits;

fruits.push("Orange");
fruits.push("PineApple");
// if we want to add certain values in varibles and rest in a new array
let [variable1, variable2, ...newArray] = fruits;
console.log(newArray);
let [...exp] = fruits; //Another way to make a copy of existing array
console.log(exp);