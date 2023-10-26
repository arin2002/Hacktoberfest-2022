"use strict"
const prn = (value = "-------------") => console.log(value);

// Clone using Object.assign

const obj = {
    key1 : 'value1',
    key2 : 'value2'
}

// const obj2 = obj; // now obj2 stores the address of obj
// prn(obj);
// obj.key3 = 'value3';
// prn(obj2);

// to clone object to another, we can use spread operator
// const obj3 = {...obj};
// obj2.key4 = 'value4';
// prn(obj);
// prn(obj3);

// Another way to clone is to use Object.assign
const obj4 = Object.assign({},obj);