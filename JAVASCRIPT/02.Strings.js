"use strict";

// Primitive data types(Cannot modify once it is created)

let firstName = "Krunallkj  esojojorj";

console.log(firstName[0]);
console.log(firstName.length); // Spaces will count in the length method

console.log(firstName[firstName.length - 1]); // Last Index
console.log(firstName[firstName.length - 2]); // Second last index

// -------------------------------------------------------------------------------------------------------- //

// Template String

let age = 20;
let nameoriginal = "Krunal";

let aboutMe1 = "My name is " + nameoriginal + " and my age is " + age;
console.log(aboutMe1);

let aboutMe2 = `My name is ${nameoriginal} and my age is ${age}`;
console.log(aboutMe2);

// Note:- Using template string we can add expressions, which could be a value, or some operations(comparision, arithmetic, ternary).

let a = 2;
let b = 3;
console.log(`${a} is greater than ${b} : ${a > b}`);

//------------------------------------------------------------------------------------------------------//

// String Methods:-

/*
1.trim()
2.toUpperCase()
3.toLowerCase()
4.slice()
5.substr()
6.substring()
7.split()
8.includes()
9.startsWith()
10.endsWith()
11.replace()
12.chatCodeAt()
13.indexOf()
14.lastIndexOf()
15.concat()
16.search()
17.match()
18.repeat()

 */

// trim() -> Count the length of string w/o white spaces
let naam = "Krunal Gupta     ";
console.log(naam.length);
naam = naam.trim();
console.log(naam.length);

// toUpperCase() -> Convert the string into new string into all Uppercase character
let name = "KrUNal";
name = name.toUpperCase();
console.log(name);

// toLowerCase() -> Convert the string into new string into all Lowercase character
console.log(name.toLowerCase());

// slice() -> slice(start index, end index -1)

let newString = name.slice(0, 5);
console.log(newString);

let newstring = name.slice(1); // This will print from starting to end
console.log(newstring);

// substr() - It takes two args, the starting index and number of characters to slice.

let string = "JavaScript";
console.log(string.substr(4, 6));

let country = "Finland";
console.log(country.substr(3, 4));

// substring() -> Takes two args, the starting index and the stopping index but it does'nt include the chracter at the stopping index

console.log(string.substring(0, 4));
console.log(string.substring(4));

// split() -> Splits a string at a specified place.

let string1 = `30 days of JavaScript`;

console.log(string1.split()); // Make an array
console.log(string1.split(" ")); // Gives space
console.log(string1.split("")); // Splits at each letter
console.log(string1.split(","));
console.log(string1.split(", "));

// includes() -> Returns boolean, checks if substring argument exists in the string.

console.log(country.includes("fin"));
console.log(country.includes("Fin"));

// startsWith() -> check if string start with that specified substring. returns boolean

console.log(country.startsWith("Fin"));

// endsWith() ->

// replace() -> Takes as a parameter the old substring and a new substring
// string.replace(oldsubstring, newsubstring)

console.log(country.replace("Fin", "Noman"));

// charCodeAt() -> Returns char code(ASCII) of the value at that index

let string5 = "30 Day of Js";
console.log(string5.charCodeAt(3)); // ascii no of D is 68

// indexOf() ->

console.log(string5.indexOf("D"));
console.log(string5.indexOf("days"));

// lastIndexOf() -> returns last position of substring if present if not return -1

console.log(string5.lastIndexOf("Day"));

// concat() ->

console.log(string5.concat(" is", " awesome"));

// search() -> returns index of first match.

console.log(string5.search("Js"));

// match() -> returns an array if there is match if not returns null

let newString1 = "love";
let patternOne = /love/;
let patterTwo = /love/gi; // g- means to search in the whole text, i- case insensitive

console.log(newString1.match("love"));

// repeat() -> returns repeated version of string

console.log(newString1.repeat(10));
// ------------------------------------------------------------------------------------------------------- //

// String concatenation

let String1 = "Krunal";
let String2 = "Gupta";

let fullName = String1 + String2;
console.log(fullName);

let sfullName = String1 + " " + String2;
console.log(sfullName);

let number1 = "13";
let number2 = "23";

let numberr = number1 + number2;
console.log(numberr);

let newNumber = +number1 + +number2;
console.log(newNumber);
