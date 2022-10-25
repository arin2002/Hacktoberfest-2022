"use strict";


// Objects inside array

// --> Very useful in real world applications

const users = [
    {userID:1, userName: "Krunal", gender: "male"},
    {userID:2, userName: "Gupta", gender: "male"},
    {userID:3, userName: "KRG", gender: "female"}
];

console.log(users);

for(let user of users){
    console.log(user);
    console.log(user.userID);
}

// Nested Destructuring 

// const [user1, user2, user3] = users;
// console.log(user1,user2);


const [{userName:user1Name, userID}, , {gender}] = users;
console.log(user1Name,gender);
console.log(userID);