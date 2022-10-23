//string concatenation
let firstName = "Deepti";
let lastName = "Mittal";
let fullName = firstName + " " + lastName;
console.log(fullName);

let string1 = "17";
let string2 = "10";

let newStr = string1 + string2; //1710
console.log(newStr);
newStr = +string1 + +string2; //27
console.log(newStr); 

//template string
let age = 20;
let aboutMe = "My name is " + firstName + " and my age is " + age;
console.log(aboutMe); 

let aboutMe2 = `My name is ${firstName} and my age is ${age}`;
console.log(aboutMe2); 

let immutable = "Hehehe";
immutable[1] = 'a';
immutable[3] = 'a';
console.log(immutable); // Hehehe
