/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <unordered_map>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;
        unordered_map<int, int> numMap;

        for(int i = 0; i <nums.size();i++){
            int complement = target-nums[i];
            if (numMap.count(complement) && numMap[complement]!= i ){
                return {numMap[complement],i};
            }         
            numMap[nums[i]] = i;
        }

        return result;
    }
};
// @lc code=end

