/*
Merge K sorted arrays
Given k different arrays, which are sorted individually (in ascending order). You need to merge all the given arrays such that output array 
should be sorted (in ascending order).

Hint : Use Heaps.

Input Format:
The first line of input contains an integer, that denotes value of k.
The following lines of input represent k sorted arrays. Each sorted array uses two lines of input. The first line contains an integer, 
that denotes the size of the array. The following line contains elements of the array.

Output Format:
The first and only line of output contains space separated elements of the merged and sorted array, as described in the task.

Constraints:
0 <= k <= 1000
0 <= n1, n2 <= 10000

Time Limit: 1 second

Sample Input 1:
4
3
1 5 9
2
45 90
5
2 6 78 100 234
1
0

Sample Output 1:
0 1 2 5 6 9 45 78 90 100 234
*/

#include<utility>
#include<queue>
vector<int> mergeKSortedArrays(vector<vector<int>*> input) {
    // Write your code here
  	vector<int> answer;
    
    priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> pq;
    
    // Insert the first element of k arrays into the priority queue
    for(int i = 0; i < input.size(); i++) {
        pq.push({input[i] -> at(0), {i, 0}});
    }
    
    // This takes O(klogk) time
    
    while(!pq.empty()) {
        pair<int, pair<int,int>> top  = pq.top();
        pq.pop();
        
        answer.push_back(top.first);
        
        int arrayIndex = top.second.first;
        int elementIndex = top.second.second;
        
        // So push the element from the same array into priority queue
        
        if(elementIndex + 1 < input[arrayIndex] -> size()) {
            pq.push({input[arrayIndex] -> at(elementIndex + 1), {arrayIndex, elementIndex + 1}});
        }
    }
    
    // This takes O(nlogK) time and O(n) space
    
    return answer;
}

// Time Complexity : O(nlogk)
// Auxillary Space : O(n) 
