"use strict";

let i = 0;

while(i<=3){
    console.log(`Value of i=${i}`);
    i++;
}
console.log(`Current value of i is ${i}`);

// Sum of n natural numbers

let n = 10;
let total = 0;
let j = 0;

while(j<=10){
    total = total + j;
    j++;
}
console.log(total);



// for loop 

for(let i = 0; i<=10;i++){
    console.log(i);
}

let sum = 0;
for(var k = 0;k<=10;k++){
    sum = sum + k;
}
console.log(`Sum of n natural numbers is ${sum}`);

// Note:- If we use "let" in the for loop then we can't access the variables for this we have to use "var" keyword

// do-while loop 

let l = 10;

do{
    console.log(l);
    l++;
}
while(l<=9)

console.log(`Value of l is ${l}`);


