function optimizedBubbleSort(array) {
    let swapped = true;
	do {
        swapped = false;
		for (let j = 0; j < array.length; j++) {
            if (array[j] > array[j + 1]) {
                let temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
			}
		}
	} while (swapped);
	return array;
}

// bubble sort code in javascript
function bubbleSort(array) {
	for (let i = 0; i < array.length; i++) {
		for (let j = 0; j < array.length; j++) {
			if (array[j] > array[j + 1]) {
				let temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	return array;
}


// array to be sorted
let array = [99, 55, 66, 22, 33, 77, 88, 11, 44]

var sortedArray = bubbleSort(array);
console.log(sortedArray);
