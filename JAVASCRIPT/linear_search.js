// linear search code in javascript

function linearSearch(arr, key) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === key) {
            return i
        }
    }
    // key wasn't found
    return -1
}

// array
let array = [99, 55, 66, 22, 33, 77, 88, 11, 44]

// key to be searched in array
let key = 77;

console.log(linearSearch(array, key))