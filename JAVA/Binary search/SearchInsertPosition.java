class SearchInsertPosition {
    public int searchInsert(int[] nums, int target) {
        int first=0,last=nums.length-1;
        int mid=(first+last)/2;
        if(nums[last]==target)
            return last;
        else if(nums[last]<target)
            return last+1;
        else if(nums[first]==target)
            return first;
        else if(nums[first]>target)
            return first;
        do{
            mid=(first+last)/2;
            if(nums[mid]==target)
                break;
            else if(nums[mid]>target){
                last=mid;
                if(nums[mid-1]<target)
                    break;
                else if(nums[mid-1]==target){
                    mid=mid-1;
                    break;
                }
            }
            else{
                first=mid;
                if(nums[mid+1]>target){
                    mid=mid+1;
                    break;
                }
                else if(nums[mid+1]==target){
                    mid=mid+1;
                    break;
                }
            }
        }while(true);
        return mid;
    }
}
