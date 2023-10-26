//Fibonacci for loop solution
const fibonacciForLoop = n => {
  let a = 0, b = 1, c = n;
  
  for(let i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  
  return c;
};

console.log(fibonacciForLoop(10));

//Fibonacci array solution
const fibonacciArray = (n) => {
  if(n <= 1) {
    return n;
  }

  const result = [0, 1];

  for (let i = 2; i <= n; i++) {
    result[i] = result[i - 2] + result[i - 1];
  }

  return result[result.length - 1];
}

console.log(fibonacciArray(15));

//Fibonacci recursive function solution
const fibonacciRecursive = n => {
  if (n <= 1) {
    return n;
  }
  return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
};

console.log(fibonacciRecursive(20))