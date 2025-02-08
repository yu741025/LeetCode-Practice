/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <string>
using std::string;

class Solution {
public:

bool isPalindrome(int x) {
    std::string str = std::to_string(x);
    int n = str.length();
        for (int i = 0 ; i <= n/2 ; i++)
        {
            if(str[i] != str[n-i-1]) 
                return false;
            else if (i==n/2) 
                return true;
            else 
                continue;
        }
    return 0;
    }
};
// @lc code=end

