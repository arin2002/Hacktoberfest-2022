prn = (value = "-------------------") => console.log(value); // arrow function
prn();
function func1 (arg,...rest){
    prn("Inside func1");
    prn(arg);
    prn(rest);
    rest[0]();
    rest[1]();
}
func1([1,2,3],()=>{prn("called callBack function 1")},()=>{prn("called Callback function 2")});
/*
concept : we can pass anything to a function as argument i.e 
an array, a string and even another function just like we  
did in above example
*/
prn();
function fun1(name){
    prn("Inside fun1");
    prn(`your name is ${name}`);
}
function myFunction(callback){
    console.log("hello there, I am a function called myFunction");
    callback("Deepti");
}
myFunction(fun1);
prn();