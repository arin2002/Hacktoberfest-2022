let sum = [0, 1, 2, 3].reduce(function (accumulator, currentValue) {
  return accumulator + currentValue
}, 0)
console.log(sum) // 6
//arrow function 
let total = [ 0, 1, 2, 3 ].reduce(( accumulator, currentValue ) => accumulator + currentValue, 0)
console.log(total) // 6

const products = [
  {
      name: "Arctis 5 Mechamebrane Keyboard",
      brand: "Steelseries"
  },
  {
      name: "Iphone 14 Pro Max",
      brand: "Apple"
  },
  {
      name: "Rival 3 Wireles",
      brand: "Steelseries"
  },
  {
      name: "Fabric Jet Black",
      brand: "Zio"
  }
]
//group the have same value name products
const groupBy = (array, prop) => {
  return array.reduce((acc, obj) => {
      let key = obj[prop]
      if (!acc[key]){
          acc[key] = []
      }
      acc[key].push(obj)
      return acc
  }, {})
}

let groupedProducts = groupBy(products, 'brand')
console.log(groupedProducts)
/* -->LOG:
{
  Steelseries: [
    { name: 'Arctis 5 Mechamebrane Keyboard', brand: 'Steelseries' },
    { name: 'Rival 3 Wireles', brand: 'Steelseries' }
  ],
  Apple: [ { name: 'Iphone 14 Pro Max', brand: 'Apple' } ],
  Zio: [ { name: 'Fabric Jet Black', brand: 'Zio' } ]
}
*/

const posts = [
  {
    title: "Post 1",
    tags: ["python", "css"],
  },
  {
    title: "Post 2",
    tags: ["js", "python"],
  },
  {
    title: "Post 3",
    tags: ["go", "css"],
  },
];
//merge the array only using 1 time in every arrays values
const allTags = posts.reduce((acc, post) => [...acc, ...post.tags], []);
console.log([...new Set(allTags)])
// --> LOG: [ 'python', 'css', 'js', 'go' ]
