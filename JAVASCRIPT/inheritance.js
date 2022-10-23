"use strict"
const prn = (value = "-----------------") => console.log(value);

class Animal{
    constructor(name,age){
        this.name = name;
        this.age = age;
    }
    eat(){
        return `${this.name} is eating`;
    }
    isCute(){
        return this.age <= 2;
    }
}

const cheetah = new Animal('cheeku',2);
prn(cheetah.eat());

// Dog is the sub class and Animal is the base class
// here Dog inherits all properties and functions of Animal class including the constructor
class Dog extends Animal{
    eat(){
        return `modified eat: ${this.name} is eating!`;
    }
}
const tommy = new Dog("tommy",2);
prn(tommy.isCute());


// let's create another subClass horse which have properties name, age and speed
// now we can use name and age of base class and add speed property for horse class

class horse extends Animal{
    constructor(name,age,speed){
        super(name,age) // super refers to the base class --> here we ask contructor of base class to assign values of name and age 
        this.speed = speed;
    }
    run(){
        return `${this.name} is running at ${this.speed}kmph`
    }
}

const chetak = new horse('chetak',6,60);
prn(chetak.run());
prn(tommy.eat());