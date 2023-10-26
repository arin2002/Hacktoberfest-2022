"use strict";

// if-else condition 

let age = 17;

if(age>=18){
    console.log("user can play bgmi");
}
else{
    console.log("user cannot play bgmi");
}

let num = 24;

if(num%2===0){
    console.log(num + " is an even number");
}
else{
    console.log(num + "is an odd number");
}


// falsy values are those values which are false in nature and can cannot be true in general case
// falsy values 
/*
false
null
""
undefined
null
0   
*/

// truth values
/*
"abc"
1,-1
*/

let firstname = "";

if(firstname){
    console.log(firstname);
}
else{
    console.log("firstname is kinda falsy");
}


// Ternary Operator / Conditional Operator

let umar = 1;

let drink = umar>=5 ? "Coffee" : "Milk";
console.log(drink);


// Nested if-else 

// Guessing Number 
// Winning number 10
// 10 is your guess right 
// 11 too high
// 9 too low


let winningNumber = 19;
let userGuess = +prompt("Take a random number")

if(userGuess === winningNumber){
    console.log("Your guess is right");
}
else{
    if(userGuess>winningNumber){
        console.log("too high !!!");
    }
    else{
        console.log("too low!!!")
    }
}


// if-else ladder

let temp = 19;

if(temp<0){
    console.log("Extremely cold!!");
}
else if(temp>10){
    console.log("Too cold outside!");
}
else if (temp>25){
    console.log("Suhana Mausam");
}
else if(temp > 40){
    console.log("Haii garmi");
}
else{
    console.log("Extremely hot outside!!");
}
