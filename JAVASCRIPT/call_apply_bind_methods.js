"use strict"

// 1) call method
// call method enables us to pass another object as this and hence using functions of one object for other object

const user1 = {
    fullName : "Manisha Mittal",
    age : 24,
    about : function(hobby){
        console.log(this.fullName,this.age,hobby);
    }
}
const user2 = {
    fullName : "Pranshu Mittal",
    age : 14,
}


user1.about.call(user2);

// if the function is parameterised then we can pass parameters in call function argument
user1.about.call(user2,'sleep');

// if a function is defined outside both the objects then also we can call them for specific object using call method
function hello(){
    console.log(`hello ${this.fullName}`);
}

hello.call(user1);
hello.call(user2);

function interests(hobby,favBand){
    console.log(`hobbies of ${this.fullName} ${hobby}`);
}
// 2) apply method
// we can pass arguments in array unlike call method

interests.apply(user1,["sleeping","Maroon5"]);
interests.apply(user2,["hare krishna","kirtan"]);

// 3) bind method --> it returns a value (function) which can be stored and used later
const func = interests.bind(user1,"sleeping","Maroon5");
func();
