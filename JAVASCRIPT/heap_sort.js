// heap sort code in javascript

// creating a heap
class MaxHeap {
    constructor() {
        this.heap = [];
    }

    parentIndex(index) {
        return Math.floor((index - 1) / 2);
    }

    leftChildIndex(index) {
        return (2 * index + 1);
    }

    rightChildIndex(index) {
        return (2 * index + 2);
    }

    // to swap to elements
    swap(a, b) {
        let temp = this.heap[a];
        this.heap[a] = this.heap[b];
        this.heap[b] = temp;
    }

    // to insert element in heap
    insert(item) {
        this.heap.push(item);
        var index = this.heap.length - 1;
        var parent = this.parentIndex(index);
        while (this.heap[parent] && this.heap[parent] < this.heap[index]) {
            this.swap(parent, index);
            index = this.parentIndex(index);
            parent = this.parentIndex(index);
        }
    }

    // to delete element from heap
    delete_ele() {
        var item = this.heap.shift();
        this.heap.unshift(this.heap.pop());
        var index = 0;
        var leftChild = this.leftChildIndex(index);
        var rightChild = this.rightChildIndex(index);
        while (this.heap[leftChild] && this.heap[leftChild] > this.heap[index] || this.heap[rightChild] > this.heap[index]) {
            var max = leftChild;
            if (this.heap[rightChild] && this.heap[rightChild] > this.heap[max]) {
                max = rightChild
            }
            this.swap(max, index);
            index = max;
            leftChild = this.leftChildIndex(max);
            rightChild = this.rightChildIndex(max);
        }
        return item;
    }
}

// heap sort function
function heapSort(arr) {
    var sorted = [];
    var heap1 = new MaxHeap();

    for (let i = 0; i < arr.length; i++) {
        heap1.insert(arr[i]);
    }

    for (let i = 0; i < arr.length; i++) {
        sorted.push(heap1.delete_ele());
    }
    return sorted;
}

// array to be sorted
let array = [99, 55, 66, 22, 33, 77, 88, 11, 44]

var sortedArray = heapSort(array);
console.log(sortedArray);