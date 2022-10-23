// we have class keyword in javascript as well and this is the most amazing thing that I learnt so far about javascript.
// the fact that classes exist in javascript overwhelmed me
// I can't express my happiness in words
// My respect for ES6 (ecma2015) increased.
// Thank you❣️

class CreateUser {
    constructor(firstName, lastName, email, age, address) {
        console.log("constructor called!")
        this.firstName = firstName;
        this.lastName = lastName;
        this.email = email;
        this.age = age;
        this.address = address;
    }
    about() {
        return `${this.firstName} is ${this.age} years old`;
    }
    is18() {
        return this.age >= 18;
    }
    sing() {
        return 'lalalalala';
    }
    fun(a){
        console.log(a);
    }
}

const user1 = new CreateUser('Abc', 'Def', 'fd', '22', 'dd');
const user2 = new CreateUser('Happy', 'Singh', '123@email.com', '17', 'myAddress');
console.log(user1);
console.log(user2);
console.log(user1.about());
console.log(user2.is18());

console.log(Object.getPrototypeOf(user1));
prn();