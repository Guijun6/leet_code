//Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

//For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
//the contiguous subarray [4,-1,2,1] has the largest sum = 6.

//click to show more practice.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        else if(nums.size() == 1) return nums[0];
        
        else
        {
            int max_nums = nums[0];
            int max_tmp = nums[0];
            for(size_t i = 1; i <nums.size(); i++)
            {
                max_tmp = max(max_tmp + nums[i], nums[i]);
                max_nums = max(max_tmp, max_nums);
            }
            return max_nums; 
        } 
    }
};
