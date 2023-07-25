/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.


Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/





class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        if(n==0)
            return;
        else if(m==0)
        {
            nums1 = nums2;
            return ;
        }
        while(i<m)
        {
            if(nums1[i]<=nums2[j])
                i++;
            else if(nums1[i]>nums2[j])
            {
                while(j<n && nums1[i]>nums2[j])
                    j++;
                swap(nums1[i], nums2[j-1]);
                j = 0;
            }
        }
        j = 0;
        while(j<n)
        {
            nums1[i] = nums2[j];
            i++;
            j++;
        }
    }
};