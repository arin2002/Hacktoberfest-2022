"use strict";

// Function Declaration 


function isEven(num1){
    if(num1%2===0)
        return 1;
    return 0;
}

let inputNum = 4
console.log(isEven(inputNum));

if(isEven===1)
    console.log(`Number ${inputNum} is even`);
else
    console.log(`Number ${inputNum} is odd`);

// !---------------------------------------------------!------ //
function firstChar(string1){
    return string1[0];
}

console.log(firstChar("abcdef"));

// !----------------------------------------------------------//

function findTarget(myarray, target){
    for(let i = 0;i<=myarray.length;i++){
        if(myarray[i]===target)
            return i;
    }
    return -1;
}

const myarray = [2,3,4,5,19];
let ans = findTarget(myarray,8);
console.log(ans);

// !--------------------------------------------------------------//

// Function Expression
// --> Same as function Declaration

const singHappyBirthDay = function(){
    console.log("happy birthday to you");
}

singHappyBirthDay();


const isEvenOdd = function(num1){
    if(num1%2===0)
        console.log(`${num1} is Even Number`);
    else
        console.log(`${num1} is Odd Number`);
}

isEvenOdd(9);


const findTarget1 = function(array, target){
    for(let i = 0;i<=array.length;i++){
        if(array[i]===target){
            return i;
        }
        return -1;
    }
}

const array = [2,4,5,6];
console.log(findTarget1(array,0));



// !-----------------------------------------------------------//

// Arrow Functions

const HappyBirthday = () => {
    console.log("Happy Birthday to you...")
}

HappyBirthday();

const sumOfThree = (num1,num2,num3) =>{
    return num1 + num2 + num3;
}

console.log(sumOfThree(2,3,4));

const isOddEven = (Number) => {
    return Number%2===0
}

console.log(isEven(4));


// Arrow function can also be written as
const naam = anystring => anystring[0]

console.log(naam('krunal'));


// !----------------------------------------------------------------------------------------//

// Function inside function

function app(){

    const myFunc = () => {
        console.log("Inside my function");
    }

    const add = (num1,num2) => {
        return num1 + num2;
    }

    const mult = (num1,num2) => {
        return num1 * num2;
    }

    console.log("Inside app function");
    myFunc();
    console.log(add(2,3));
    console.log(mult(4,2));
}

app();

// add(4,2);            // We cannot call the inside's function outside the function 


// ----------------------------------------------------------------------------------------------//

// Lexical Scope

let myVar = "value12";

function myApp(){

    // var myVar = "value1";

    function myFunct(){
        // const myVar = "value69";
        console.log(`Inside myfunct value of myvar is: ${myVar}`);
    }

    console.log(myVar);
    myFunct();
}

myApp();

// ---------------------------------------------------------------------------------------------------//

// Block scope v/s Function Scope 

// -> let and const are block scope
// -> var is function scope 



// This will throw error
/*{
    let firstName = "Krunal";
    // console.log(firstName);          // This will work as this variable is called inside scope 
}
console.log(firstName);*/

{
    var firstName = "Mohit";
}
console.log(firstName);


// ------------------------------------------------------------------------------------------------------//

// Default Parameters 

// --> If we cannot give any value to parameters then in JS we can give the default parameters value to the parameters


// -> Used before the ES6
// function addTwo(a,b){
//     if(typeof b==="undefined"){
//         b = 0;
//     }
//     return a+b;
// }

// console.log(addTwo(3));

function addTwo(a,b=0){
    return a+b;
}

console.log(addTwo(3));

// -------------------------------------------------------------------------------------------------------//

// Rest Parameters
// -> It is used to give the infinite parameters to the functions

function myFunction(a,b,c,...d){
    console.log(`Value of a is ${a}`);
    console.log(`Value of b is ${b}`);
    console.log(`Value of c is ${c}`);
    console.log("Value of d is",d);
}

myFunction(1,3,2,5,6,7,8);


function addAll(...numbers){
    let sum = 0;
    for(let number of numbers){
        sum = sum + number;
    }
    return sum;
}

const total = addAll(1,2,3,5,6,8);
console.log(total);


// -----------------------------------------------------------------------------------------------------------//

// Parameter Destructuring

// Mainly used in React 
// Generally used with objects

const person = {
    Name: "Krunal",
    Gender : "Male",
    Age : 22
};

// 1st Method
function printDetails(obj){
    console.log(obj.Name);
    console.log(obj.Gender);
    console.log(obj.Age);
    console.log(obj.Salary);
}

// 2nd Method 
function printDetails({Name,Age,Gender}){
    console.log(Name);
    console.log(Gender);
    console.log(Age);
}


printDetails(person);


// --------------------------------------------------------------------------------------------------//

// Callback Functions


function func1(name){
    console.log("Inside func1 function");
    console.log(`My name is: ${name}`);
}

function func2(callback){
    console.log("Inside callback function");
    console.log(func1);
    func1();
    func1("Krunal")

}

func2(func1);


// -------------------------------------------------------------------------------------------------//

// Function returing function

function myfunc(){
    function hello(){
        return "Hello World!";
    }
    return hello;
}

const answer = myfunc();

// Note :- Here answer become the fucntion so that we call it.
console.log(answer());


// ----------------------------------------------------------------------------------------------------//

