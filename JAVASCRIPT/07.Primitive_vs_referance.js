// Primitive vs Referance data types 

// Note :- We cannot compare the non-primitive data types. They are compare with their referances 


let num1 = 9;
let num2 = num1;

console.log(num1);
console.log(num2);
num1++;

console.log("After incrementing");
console.log(num1);
console.log(num2);


let arr1 = ["item1","item2"];
let arr2 = arr1;

console.log(arr1);
console.log(arr2);

arr1.push("item3");

console.log("After pushing elements in array");
console.log(arr1);
console.log(arr2);


// Note:- Primitive data types is stored in the stack so that all elements get separate storage but in referance data type all items are stored in heap memory in which all elements have unique ID for that element