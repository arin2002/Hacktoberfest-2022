
// static
// The static keyword defines a static method or property for a class, or a class static initialization block.
// Neither static methods nor static properties can be called on instances of the class. Instead, they're called on the class itself.

//Static methods are often utility functions, such as functions to create or clone objects,
// whereas static properties are useful for caches, fixed-configuration, or any other data you don't need to be replicated across instances.

class Animal{
    constructor(name,age){
        this.name = name;
        this.age = age;
    }
    static staticProp = '#AnimalLifeMatter';
    static staticMethod(){
        console.log('Inside static method')
        return `static method has been called`;
    }
    eat(){
        return `${this.name} is eating`;
    }
    isCute(){
        return this.age <= 2;
    }
}

const object = new Animal('rabbit','5');
// object.staticMethod(); // error --> static methods can't be called using instances of a class
Animal.staticMethod();
console.log(Animal.staticProp);
