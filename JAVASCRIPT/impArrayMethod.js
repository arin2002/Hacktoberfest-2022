"use strict"
const prn = (value = "-------------------") => console.log(value); // arrow function
prn();

// Important Array Methods

const numbers = [12, 3, 1, 4, 2, 6, 5];
function multiplyBy2(number, index) {
    prn(`index is ${index}`);
    prn(`${number * 2}`);
}
for (let i = 0; i < numbers.length; i++) {
    multiplyBy2(numbers[i], i);
}
prn();

// Method1 --> forEach --> it takes care of value and index of array elements by itself
numbers.forEach(multiplyBy2);
prn();

// we can also do this like this:
numbers.forEach(function (value, index) {
    prn(`value of array element at ${index} is: ${value}`);
})
prn();
numbers.forEach(function (number) {
    prn(`${number}*12 = ${number * 12}`);
})
prn();

const users = [
    { userId: 1, firstName: "Deepti", age: 20 },
    { userId: 2, firstName: "Pranshu", age: 14 },
    { userId: 3, firstName: "Naina", age: 24 },
    { userId: 4, firstName: "Naina", age: 24 },
    { userId: 5, firstName: "Naina", age: 24 },
    { userId: 6, firstName: "Naina", age: 24 },
]
users.forEach(function (user) {
    prn(user);
    prn(user.firstName);
})
prn();
users.forEach(function ({ firstName }) {
    prn(`${firstName}`);
})
prn();

// Method 2 ---> map (this method requires the callback to return something and stores the returned values in an array)
const square = function (number) {
    return number * number;
}
// i) passing a pre-defined function in map 
const squareNumbers = numbers.map(square);
prn(squareNumbers);

// ii) making an anonymous function inside map and passing array element and index explicitly to use these values
const square2 = numbers.map(function (number, index) {
    // prn(`We have got the number i.e ${number} and the index i.e ${index}`);
    return `number: ${number}, index: ${index}`;
})
prn(square2);
prn();

const userNames = users.map((user) => {
    return user.firstName;
})
prn(userNames);
prn();

// Method 3 --> filter method
// the callback function of filter method shoud return boolean value

//callback func:
const isEven = num => num % 2 === 0;
const isOdd = num => num % 2 !== 0;
const evenNumbers = numbers.filter(isEven);
const oddNumbers = numbers.filter(isOdd);
prn(evenNumbers);
prn(oddNumbers);

// we can also write callback function inside the filter method call
const divby3 = numbers.filter(function (number) {
    return number % 3 === 0;
});
prn(divby3);
prn();

// Method 4 ---> Reduce method
const values = [1, 2, 3, 4, 5, 10];

const sum = values.reduce((accumulator, currentValue) => {
    return accumulator + currentValue;
});
prn(sum); //25
/*
how reduce method works:
accumulator      currentValue      return
   1                  2             3
   3                  3             6
   6                  4             10
   10                 5             15
   15                 10            25
Every time the loop runs, accumulator becomes the previous returned value
*/
// we can also provide an initial value to the accumulator as illustrated below (accumulator = 100 initially and currentValue = 1)
const sum2 = numbers.reduce((accumulator, currentValue) => {
    return accumulator + currentValue;
}, 100);
prn(sum2);
prn();

// Example 2 (to illustrate practical usage of reduce)
const userCart = [
    { productId: 1, productName: "SmartPhone", price: 12000 },
    { productId: 2, productName: "Laptop", price: 52000 },
    { productId: 3, productName: "headphone", price: 2000 },
]

const totalCost = userCart.reduce((totalPrice, currentProduct) => {
    return totalPrice + currentProduct.price;
}, 0);
prn(totalCost);
prn();

// Method 5 --> sort method

/* ASCII Table
char: ascii value

'0' : 48
'1' : 49
'2' : 50
'3' : 51
'4' : 52
'5' : 53
'6' : 54
'7' : 55
'8' : 56
'9' : 57

':' : 58
';' : 59
'<' : 60
'=' : 60
'>' : 60
'?' : 60
'@' : 60

'A' : 65
'B' : 66
'C' : 67
'D' : 68
'E' : 69
'F' : 70
'G' : 71
'H' : 72
'I' : 73
'J' : 74
'K' : 75
'L' : 76
'M' : 77
'N' : 78
'O' : 79
'P' : 80
'Q' : 81
'R' : 82
'S' : 83
'T' : 84
'U' : 85
'V' : 86
'W' : 87
'X' : 88
'Y' : 89
'Z' : 90

'[' : 91
'\' : 92
']' : 93
'^' : 94
'_' : 95
'`' : 96

'a' : 97
'b' : 98
'c' : 99
'd' : 100
'e' : 101
'f' : 102
'g' : 103
'h' : 104
'i' : 105
'j' : 106
'k' : 107
'l' : 108
'm' : 109
'n' : 110
'o' : 111
'p' : 112
'q' : 113
'r' : 114
's' : 115
't' : 116
'u' : 117
'v' : 118
'w' : 119
'x' : 120
'y' : 121
'z' : 122
'{' : 123
'|' : 124
'}' : 125

*/

// Note: sort method modifies the original array
// Note2 : sort method treats every value as string if the array contains numbers then it converts them to string and then arrange them in increasing order according to the Ascii codes

const studentNames = ["Deepti", "Anushka", "Naina", "Pranshu", "Sumit", "Raman", "Prasuk", "Deepika", "Dishita", "Nayan", "Rohan"];
prn(studentNames.sort()); // sorted in right order

// Sorting numbers

const nums = [5, 9, 1200, 410, 3000];
nums.sort();
prn(nums);
// ["5","9","1200","410","3000"]; // values converted to string
// [53, 57,  49,    52,   51]     // Ascii codes of first character of string
// now the above values will be sorted: [49,51,52,53,57] --> [1200,3000,410,5,9] --> answer

nums.sort((a, b) => a - b);
prn(nums);

// how this works?
// 1200, 410
// a-b --> 790
// a-b ---> positive ---> (b,a) --> (410,1200)
// a-b ---> negative ---> (a,b)
// 5,9 ---> -4 ---> (5,9)

// we can use this trick to sort in descending order also
values.sort((a, b) => b - a);
prn(values);
values.sort((a, b) => a - b); // to get back the original array
prn();

const products = [
    { productId: 1, productName: "laptop", price: 56000 },
    { productId: 2, productName: "headphone", price: 2500 },
    { productId: 3, productName: "mobile", price: 15000 },
    { productId: 4, productName: "fridge", price: 70800 },
    { productId: 5, productName: "dosa tava", price: 5500 },
]

// sort according to prices low to high
const lowToHigh = products.slice(0).sort((a, b) => {
    return a.price - b.price;
});
prn(products);
prn(lowToHigh);
// sort according to prices high to low
const highToLow = products.slice(0).sort((a, b) => {
    return b.price - a.price;
});
prn(highToLow);
// note: we used slice function to clone to product array since we don't want to modify the original array
prn();

// Method 6 --> find method
const myArray = ["Hello", "cat", "dog", "lion"];
function isLength3(string) {
    return string.length === 3;
}
prn(myArray.find(isLength3)); // will return the first occurence of string of length 3
// find user with specific userId
const myUser = users.find((user) => user.userId === 3);
prn(myUser.firstName);


// Method 7 --> every method
const N = [2,4,6,8,10];
// checks given condition for every element and returns true only if every element satisfies the condition ----> behaves like logical And operator
prn(N.every((num) => num%2 === 0));

const ans = userCart.every((cartItem) => cartItem.price < 30000);
prn(ans);
prn();


//Method 8 --> some method
// checks through the array, if any element satisfies the given conditons, returns true and if no value satifies then returns false ---> behaves like logical OR operator

const A = [1,4,5,23];
const res = A.some((num) => num%2 == 0);
prn(res);

const hasExpensiveProduct = userCart.some((product) => product.price > 50000);
prn(userCart);
prn(hasExpensiveProduct);
prn();

// Method 9 --> fill method
// value, start, end --> [start,end)

const array1 = new Array(10).fill(-1);
prn(array1);

const array2 = [1,2,3,4,5,6,7,8];
array2.fill(0,2,5);
prn(array2);


// Method 10 --> splice method
// start, delete, insert

//used to delete or insert element from/to array
const array3 = ['item1','item2','item3'];

// delete
const deletedItem = array3.splice(1,1); // it implies start from 1st index and delete one item
prn(array3); // item 2 deleted
// it also returns the deleted item
prn(`deletedItem: ${deletedItem}`);

// insert
array3.splice(0,0,'inserted item');
prn(array3);

// insert and delete
const deleted = array3.splice(1,2,'item5', 'item6');
prn(array3);
prn(deleted);