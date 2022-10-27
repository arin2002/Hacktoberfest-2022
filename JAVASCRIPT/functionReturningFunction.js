"use strict"
const prn = (value = "-------------------") => console.log(value); // arrow function
prn();

// function returning function
function fun1(){
    function hello(){
        prn("Hello world!!");
    }
    return hello;
}
const result = fun1();
prn(`${result}`);
result();
prn(); // for line break

// when the returning function also returns something
function fun2(){
    function hey(name="friend"){
        return `heyooo ${name}`;
    }
    return hey;
}
const result1 = fun2();
prn(`${result1}`);
const result2 = result1("Deepti");
prn(result2);