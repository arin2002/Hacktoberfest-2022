"use strict"
const prn = (value = "-------------") => console.log(value);

// new keyword does the following things -->
// 1st) create an empty object --> this = {}
// 2nd) assing all properties mentioned in function to this object and then returns it
// 3rd) const varName = 'Object.create(functionName.prototype)' -->does this by itself
// i.e links the __proto__ and prototype

// 😺Naming Convention for Constructor methods ===> first letter is capital

// constructor function 
function CreateUser(firstName, lastName, email, age, address){
    this.firstName = firstName;
    this.lastName = lastName;
    this.email = email;
    this.age = age;
    this.address = address;
}

CreateUser.prototype.about = function(){
    return `${this.firstName} is ${this.age} years old.`;
};
CreateUser.prototype.is18 = function (){
    return this.age >= 18; 
}
CreateUser.prototype.sing = function (){
    return "la la la la ";
}

const user1 = new CreateUser('Deepti','Mittal','abc@email.com',20,'myAddress');
console.log(user1);
console.log(user1.is18());


// this will list all the keys of user1 (i.e keys in prototype are also listed)
for(let key in user1){
    prn(key);
}
prn();

//⭐ if we don't want to print properties/functions mentioned in prototype then we can use -->
for(let key in user1){
    if(user1.hasOwnProperty(key)){ 
        console.log(key);
    }
}


let num = [23,45,67]; // internally new keyword is used to create object of type Array
let numbers = new Array(1,2,3);
console.log(Array.prototype);
prn();
console.log(String.prototype);