/*
   Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

   There is only one repeated number in nums, return this repeated number.


   nums.length == n + 1
   1 <= nums[i] <= n
   All the integers in nums appear only once except for precisely one integer which appears two or more times.
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[nums[0]], fast=nums[nums[nums[0]]];
        while(fast!=slow)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        slow = nums[0];

        while(fast!=slow)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return fast;
    }
};