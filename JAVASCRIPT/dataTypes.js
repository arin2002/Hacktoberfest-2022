//typeof operator => tells the data type of variable

// Primitive Data types
// string "Deepti"
// number 2, 4, 5.6
// booleans
// undefined
// null
// BigInt
// Symbol

let age = 20;

//convert number to string (number + "")
console.log(typeof age); //number
console.log(typeof (age + "")); // now age is a string

//convert string to number

let myStr = +"34"; //adding a '+' before a string makes it a number
console.log("Type of myStr is: " + typeof(myStr));

age = 18;
age = String(age); // number will be converted to string
console.log(typeof age);
age = Number(age); // changed back to number from string
console.log(typeof age);

// undefined:  when we declare a variable but no value is assigned to it
// null --> (null != 0)
let nullVariable = null;
console.log(typeof nullVariable); // it prints object instead of null(bug in javascript)

// BigInt --> came in 2020
let myNumber = 123;
console.log(Number.MAX_SAFE_INTEGER);

myNumber = BigInt(966602596849789475795340959409685496754);
console.log(myNumber);
// BigInt can also be decalred using 'n' after the number
let num = 13n;
myNumber = BigInt(12);
console.log(typeof num); //bigint
console.log(num + myNumber);

// booleans and comparison operator
let num1 = 5;
let num2 = 7;
console.log(num1 > num2); //false

// == vs ===
// '==' checks only value while '===' also checks data type
console.log("12" == 12); //true
console.log("12" === 12); //false

// != vs !==
num1 = "7";
num2 = 7;
console.log(num1 != num2); //false : checks only value 
console.log(num1 !== num2); //true : checks both value and type

//truthy and falsy values
//falsy values:  false, null, "", undefined, 0

let userInput = prompt("Guess a number");
console.log(typeof userInput, userInput); //prompt takes input as string
let input2 = +prompt("Guess another number"); // now the type is number since we converted string to number by adding a '+'


