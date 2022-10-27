// understanding this keyword

function personInfo(){
    console.log(`Person name is ${this.firstName} and age is ${this.age}`);
}
 
const person1 = {
    firstName: "Pranshu",
    age: 14,
    about : personInfo
}
const person2 = {
    firstName: "Deepti",
    age: 20,
    about : personInfo
}
const person3 = {
    firstName: "Naina",
    age: 24,
    about : personInfo
}

person1.about();
person2.about();
person3.about();

console.log(this); // it will print window object

// Important !!
// Arrow function and this --->
// For arrow function this points to the object one level higher 

const user1 = {
    firstName : 'Monkey-man',
    age : 12,
    nickName : 'ninja',
    about : () => {
        console.log(this); // window object
        // console.log(this.firstName,this.age);
    }
}
user1.about(user1);

//short syntax ==> when function is defined inside an object, we can skip the keyword 'function'
let obj = {
    key1 : 'value1',
    key2 : 'value2',
    about(){
        console.log(this.key1,this.key2);
    }
}
obj.about();