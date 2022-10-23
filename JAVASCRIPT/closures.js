// closures
// A closure is the combination of a function bundled together (enclosed) with references 
// to its surrounding state (the lexical environment).
// In other words, a closure gives you access to an outer function's scope from an inner function. 
// In JavaScript, closures are created every time a function is created, at function creation time.
// Function can return function

// closure example 1 
function outerFunction(){
    function innerFunction(){
        console.log('Hello World!');
    }
    return innerFunction;
}
const ans = outerFunction();
console.log(ans);

//closures example2
function hello(x){
    const a = 'varA';
    const b = 'varB';
    return function(){
        console.log(a,b,x);
    }
}
const ans1 = hello('arg');
ans1();

// Closures Example 3

function myFunction(exp){
    return function(base){
        return base**exp;
    }
}
const square = myFunction(2);
console.log(square(25));

// using arrow function to create myFunction
const myFunc1 = power => number => number**power;
const cube = myFunc1(3);
console.log(cube(7));

// Closure example 4
function func(){
    let cnt = 0;
    return function(){
        cnt++;
        if(cnt == 1){
            console.log("Hii, You called me!!");
        }
        else console.log("Mai ek baar call ho chuka hu")
    }
}
const myFunc = func();
myFunc();
myFunc();

const myFunc2 = func();
myFunc2();
myFunc2();
