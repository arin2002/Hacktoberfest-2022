// binary search code in javascript

function binarySearch(sortedArray, key) {
    let start = 0;
    let end = sortedArray.length - 1;

    while (start <= end) {
        let middle = Math.floor((start + end) / 2);

        if (sortedArray[middle] === key) {
            // found the key
            return middle;
        } else if (sortedArray[middle] < key) {
            // continue searching to the right
            start = middle + 1;
        } else {
            // search searching to the left
            end = middle - 1;
        }
    }
    // key wasn't found
    return -1;
}

// array (array should be sorted)
let array = [11, 22, 33, 44, 55, 66, 77, 88, 99]

// key to be searched in array
let key = 44;

console.log(binarySearch(array, key))