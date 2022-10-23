//getters and setters

class Person{
    constructor(firstName,lastName,age){
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    get fullName(){
        return `${this.firstName} ${this.lastName}`;
    }

    set fullName(fullName){
        const[firstName,lastName] = fullName.split(" ");
        this.firstName = firstName;
        this.lastName = lastName;
    }
}

const person1 = new Person('Deepti','Mittal',20);
console.log(person1.fullName); // we can call getters without using paranthesis
// Infact if we call getters like function, it throws an error since function having prefix get are no more functions but properties

person1.fullName = "Pranshu Mittal";
console.log(person1.fullName);