/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
        int l2=nums2.size();
        vector<int> nums3;
        vector<int> v;
        int i=0,j=0;int p=0;
        int limit=(l1+l2)/2;
        while(p<=limit&&i<l1&&j<l2){
            if(nums1[i]>nums2[j]){
                nums3.insert(nums3.begin()+p,nums2[j]);
                j++;
            }
            else if(nums1[i]==nums2[j]){
                nums3.insert(nums3.begin()+p,nums2[j]);
                j++;
            }
            else{
                nums3.insert(nums3.begin()+p,nums1[i]);
                i++;
            }
            p++;
        }
        if(i==l1){
            while(p<=limit){
                nums3.insert(nums3.begin()+p,nums2[j]);
                j++;
                p++;
                
            }
        }
        else if(j==l2){
            while(p<=limit){
                nums3.insert(nums3.begin()+p,nums1[i]);
                i++;
                p++;
            }
        }
        if((l1+l2)%2!=0){
            return nums3[nums3.size()-1];
        }
        else{
            return (nums3[nums3.size()-2]+nums3[nums3.size()-1])/2.0;
        }
    }
};