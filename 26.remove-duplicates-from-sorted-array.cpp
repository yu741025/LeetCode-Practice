/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        for (int i = 1 ; i < nums.size(); i++){
            if (nums[i] > nums[slow]){
                slow ++;
                nums[slow] = nums[i];
            }
            else{
            }
        }
        return slow+1 ;
    }
};
// @lc code=end

