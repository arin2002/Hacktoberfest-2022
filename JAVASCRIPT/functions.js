function prn(value) {
    console.log(value);
}
prn('hello');

// function expressions
let fun = function () {
    prn("let's have fun");
}
fun();

// Arrow functions
const ArrowFun = () => {
    prn("This is an Arrow function");
}
ArrowFun();

const isEven = (num) => {
    if (num % 2 == 0) return "Even";
    else return "Odd";
}
prn(isEven(8));
prn(isEven(7));

//note: in case of Arrow functions if there is only one argument then paranthesis can be omitted
const lastDigit = num => {
    return num % 10;
}
prn(lastDigit(86));

// note 2: if the function body contains a single line then we can omit 'return' as well
const happyBirthday = name => prn(`Happy Birthday ${name}`);
happyBirthday("Deepti");

// Function declaration versus function expression
// the following behaviour is called hoisting
// A Function Expression is created when the execution reaches it and is usable only from that moment.
// A Function Declaration can be called earlier than it is defined.

hello();
function hello(){
    prn("Hello world");
}

// creating function inside function
const app = () => {
    const myFunc = () => prn("Hello from my func");
    const addTwo = (num1,num2) => {
        return num1 + num2;
    }
    const multiply = (num1,num2) => num1*num2;
    prn("Inside app function");
    myFunc();
    prn(addTwo(13,34));
    prn(multiply(45,98));
}
app();

// Default values

function subtract(a,b=1){
    return a-b;
}
prn(subtract(34));

// Rest Parameters

function  myfun(a,b,...c){
    prn(a);
    prn(b);
    prn(c);
}
myfun(22,43,45,98,78,66,90);

function addAll(...numbers){
   let sum = 0;
   for(let num of numbers){
      sum += num;
   }
   return sum;
}
prn(addAll(10,20,30,40,50,60));

// Parameter destructuring
const person = {
    firstName : "Deepti",
    lastName : "Mittal",
    gender : "Female",
    Age : 20
}

function printDetails1(object){
    prn(object.firstName);
    prn(object.gender);
}
printDetails1(person);

//using param destructuring
function printDetails2({firstName,gender}){
    prn(firstName);
    prn(gender);
}
printDetails2(person);