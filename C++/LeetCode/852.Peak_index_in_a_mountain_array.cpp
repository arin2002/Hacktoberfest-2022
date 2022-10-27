/* An array arr a mountain if the following properties hold:
1. arr.length >= 3
2. There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

Solution :
A loop is used throughout the array to check if the adjacent elements are smaller and finally, the element as the peak gets stored in a variable and returned.
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans; int flag=0;
        for(int i=1;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            //check if the adjacent elements in array smaller
            {    ans = i; flag++; }
        }
        if(flag==1) //flag is set to 1 if there is a peak
            return ans;
        else return -1;
    }
};