const prn = (value = "---------------") => console.log(value);

// if we want to create 1M users having same properties and functions then it will be very tedious to create object for each user individually
// in this case we can create a function which will create a user having given properties and return it
// Also for methods we can use an object that stores all the required method and use this object to create methods for each object/user
// note: we are not creating methods for each object because it will require a lot of memory for the same function and we can easily achieve this by getting a reference to the existing global method


const userMethods = {
    about : function(){
        return `${this.firstName} is ${this.age} years old`;
    },
    is18: function (){
        return this.age >= 18;
    }
}

function createUser(firstName, lastName, email, age , address){
    const user = {};
    user.firstName = firstName;
    user.lastName = lastName;
    user.email = email;
    user.age = age;
    user.address = address;
    user.about = userMethods.about; // now about of user (for which the function is called)stores the reference(address) of about function
    user.is18 = userMethods.is18;
    return user;
}

const user1 = createUser('Deepti','Mittal','abc@gmail.com','20','delhi');
const user2 = createUser('Manisha','Mittal','edg@gmail.com','24','delhi');
const user3 = createUser('Pranshu','Mittal','afk@gmail.com','14','delhi');
console.log(user1.about());
console.log(user2.about());
console.log(user3.about());

console.log(user1.is18());
prn();

// note : above method works fine but there's a problem --->
// if we want to add another user method then we have to add it in the object --> userMethod 
// as well as in the function -> createUser (as user.about = userMethos.funName)
// and if we have so many new functions then this approach can cause manual errors

// Solution to the above mentioned problem is ----> "Using Object.create()"

const obj1 = {
    key1:"value1",
    key2: "value2"
}
const obj2 = Object.create(obj1); // ⭐very important⭐
obj2.key3 = "value3";
console.log(obj2);
console.log(obj2.key2);

// here what we did is, created a __proto__ of obj1 for obj2
// now obj2 have access to all the key-value pairs of obj1 along with its own
// if obj2 have the same key as obj1 then it's own key will be used!

// let's use this to create new users
// here obj1 is the __proto__ of obj2
// __proto__ is written as [[prototype]] in official ecmascript documentation
// note prototype and [[prototype]] are different not same

console.log(obj2.__proto__);
prn();


function createUser2 (firstName,lastName,email,age,address){
    const user = Object.create(userMethods); // ⭐⭐
    user.firstName = firstName;
    user.lastName = lastName;
    user.email = email;
    user.address = address;
    user.age = age;
    return user;
}
const user4 = createUser2('Sapna','Mittal','sap234@gmail.com','44','delhi');
console.log(user4);
prn(user4.about());
prn(user4.is18());
prn();
console.log(obj2.__proto__);
