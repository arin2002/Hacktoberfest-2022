//lexical scope
/* A lexical scope in JavaScript means that a variable defined 
outside a function can be accessible inside another function 
defined after the variable declaration. 
But the opposite is not true; the variables defined inside a
function will not be accessible outside that function.
*/
const prn = value => console.log(value);
// Block scope versus function scope

// let and const are block scope
{
    let firstName = "Deepti";
}
// prn(firstName); // error fristName is not defined 
{
    let firstName = "Sapna";
    prn(firstName);
}

// var is function scope (it is accessible anywhere in the function)
let fun = () => {
    if (true) {
        var firstName = "Deepti";
        prn(`Hello ${firstName}`);
    }
    prn(firstName);
}
fun();

if (true) {
    var firstName = "Pranshu";
}

prn(`${firstName} --> variable used outside the block in which it was declared since var is used which has function scope`);



