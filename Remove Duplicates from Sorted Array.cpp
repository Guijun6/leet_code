//Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.

//Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

//Example:

//Given nums = [1,1,2],

//Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
//It doesn't matter what you leave beyond the new length.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(size_t i = 0; i < nums.size(); i++)
        {
            for(size_t j = i + 1; j < nums.size();)
            {
                if(nums[i] == nums[j])
                {
                    nums.erase(nums.begin()+j);
                }
                else
                    j++;
            }
        }
        return nums.size();
    }
};
