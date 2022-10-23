// in javascript, function can also be treated like object
// and thus they have some pre-defined properties and we can also assign new properties to them

function hello(){
    console.log("hello world!!");
}

// javascript function ===> function as well as object
console.log(hello.name); // i.e function have a property called name which returns name of the function

// Adding our own properties to a function

hello.myOwnProperty = "Hehe😏";

console.log(hello.myOwnProperty);

// some useful properties of functions ---> call, apply and bind method 

// function provides a prototype that is an empty object
console.log(hello.prototype); //{} --> empty object with only one property that is a constuctor

// ⭐ note: only functions provide prototype property 

// const hey = ['hii','hola','namaskar'];
// console.log(hey.prototype); // undefined since anything other than functions don't have a prototype


hello.prototype.prop1 = "prop1";
hello.prototype.prop2 = "prop2";
console.log(hello.prototype);

// we can also add another function in the prototype of a function
hello.prototype.sing = function(){
    return 'lalalala';
}
console.log(hello.prototype);
console.log(hello.prototype.sing());

// we can create a connection between a __proto__ and a prototype

