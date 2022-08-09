class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int counter = 1;
        int left = 0;
        for(int i = 1;i<nums.size();i++){
            if (nums[left] == nums[i] ){
               counter++;
            }    
            else{
                counter = 1;
            }
            if( counter<=2){
                nums[++left] = nums[i];
            }
        }
        return left+1;
        
    }
};
