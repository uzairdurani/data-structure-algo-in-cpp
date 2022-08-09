class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int end = nums.size()-1;
       
        while (s<end-1){
            int mid = s+(end-s)/2;
            if (nums[mid]>nums[mid+1] && nums[mid]> nums[mid-1]){
                return mid;
            }
            if(nums[mid]<nums[mid+1]){
                s = mid+1;
            }else{
                end = mid-1;
            }
        }
        if (nums[s]>nums[end])
            return s;
        return end;
    }
};