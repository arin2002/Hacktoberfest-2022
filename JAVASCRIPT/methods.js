// methods --> function inside object is called a method

const person = {
    firstName : "kiddo",
    age : 8,
    about : function (){
        console.log(this); // this represents the object
    }
}

person.about();

