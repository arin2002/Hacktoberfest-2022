//object destructuring
const band = {
    bandName: "led zepplin",
    famousSong: "stairway to heaven",
    year: 1989,
    anotherFamousSong: "kashmir"
};
// let bandName = band.bandName;
// let famousSong = band.famousSong;

// const { bandName, famousSong } = band; // by default variables are assigned the key name
let { bandName: var1, famousSong: var2 } = band; // we can name them different using this syntax
// to add remaining values we can write:
let { bandName, famousSong, ...restProps } = band; // i.e using spread operator

// objects inside arrays  --> if we want to store details of 12 people 
const users = [
    {userId:1, firstName: "Deepika",gender:"female"},
    {userId:2, firstName: "Deepti",gender:"female"},
    {userId:3, firstName: "Dishita",gender:"female"}
]
/**/
for(let user of users){
    console.log(user);
}

// Nested Destructuring
const [user1,user2,user3] = users;
console.log(user1);

const [{firstName : user1firstName, userId}, , {gender:user3gender}] = users;
console.log(user1firstName);
console.log(userId); // this contains userid of user1 
console.log(user3gender);