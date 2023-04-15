next_permutation : find next lexicographically greater permutation
Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).

Example 1 :

Input format: Arr[] = {1,3,2}

Output: Arr[] = {2,1,3}

Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.
  
solution:

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for(int i = 0; i < n-1; i++) {
          if(nums[i]<nums[i+1]) idx = i;
        }
        if(idx == -1) {
          reverse(nums.begin(), nums.end());
          return;
        }
        int l = idx + 1;
        for(int i = idx + 1; i < n; i++) {
            if(nums[i] > nums[idx]) l = i;
        }
        swap(nums[idx], nums[l]);
        reverse(nums.begin() + 1 + idx, nums.end());
        return;
    }
};
