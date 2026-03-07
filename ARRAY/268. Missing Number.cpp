class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 ;
        for(int i =0;i<nums.size();i++){
            sum = sum + nums[i];
        }
        int og_sum = (nums.size()*(nums.size()+1))/2;
        int missing_num = og_sum - sum ;
        return missing_num;
    }
    
};