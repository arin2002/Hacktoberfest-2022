"use strict"
const key1 = "objkey1";
const key2 = "objkey2";

const value1 = "myValue1";
const value2 = "myValue2";

//method 1:
let obj = {};
obj[key1] = value1;
obj[key2] = value2;
console.log(obj);

//method 2:
const obj2 = {
    [key1]: value1,
    [key2]: value2
}

