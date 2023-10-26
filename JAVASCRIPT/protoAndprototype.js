const userMethods = {
    about : function(){
        return `${this.firstName} is ${this.age} years old`;
    },
    is18: function (){
        return this.age >= 18;
    },
    sing(){
        return 'lalalalala';
    }
}

// we can achieve the same result by adding functions directly to the prototype of createUser function as follows
function createUser(firstName, lastName, email, age , address){
    // const user = Object.create(userMethods);
    const user = Object.create(createUser.prototype);
    user.firstName = firstName;
    user.lastName = lastName;
    user.email = email;
    user.age = age;
    user.address = address;
    user.about = userMethods.about; 
    user.is18 = userMethods.is18;
    return user;
}

createUser.prototype.about = function(){
    return `${this.firstName} is ${this.age} years old`;
}
createUser.prototype.is18 = function(){
    return this.age >= 18;
}
createUser.prototype.sing = function(){
    return 'lalalalala';
}
console.log(createUser.prototype);

const user1 = createUser('abc','efg','hij',6,'nop');
console.log(user1.about());