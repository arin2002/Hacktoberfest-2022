/*
Remove Min
Implement the function RemoveMin for the min priority queue class.
For a minimum priority queue, write the function for removing the minimum element present. Remove and return the minimum element.

Note : main function is given for your reference which we are using internally to test the code.
*/

#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }
    
    void downHeapify(vector<int>& pq, int size, int index) {
        int curr = index;
        int leftChildIndex = 2 * index + 1;
        int rightChildIndex = 2 * index + 2;
        
        if(leftChildIndex < size and pq[leftChildIndex] < pq[curr] ) {
            curr = leftChildIndex;
        }
        
        if(rightChildIndex < size and pq[rightChildIndex] < pq[curr]) {
            curr = rightChildIndex;
        }
        
        if(curr != index) {
            swap(pq[curr], pq[index]);
            // Recursion will heapify the remaining tree
        	downHeapify(pq, size, curr);
        }
        
        
    }

    int removeMin() {
        // Write your code here
        int ans;
        if(pq.size()) {
         ans = pq.front();
    	} else {
            return -1;
        }
        
        pq[0] = pq[pq.size() - 1];
        pq.pop();
        
        downHeapify(pq, pq.size(), 0);
        
        return ans;
    }  
};
