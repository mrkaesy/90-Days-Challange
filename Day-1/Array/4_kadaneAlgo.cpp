Kadane’s Algorithm : Maximum Subarray Sum in an Array
Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Examples:

Example 1:

Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output: 6 

Explanation: [4,-1,2,1] has the largest sum = 6. 

Examples 2: 

Input: arr = [1] 

Output: 1 

Explanation: Array has only one element and which is giving positive sum of 1.
  
solution:
class Solution {
public:
    int maxSubArray(vector<int>& num) {
        long long sum=0;
        int starting_index=-1;
        int ending_index=-1;
        long long max=LONG_MIN;
        for(int i=0;i<num.size();i++)
        {
            if(sum==0) starting_index=i;
            sum=sum+num[i];
            if(sum>max)
            {
                max=sum;
                ending_index=i;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        for(int i=starting_index;i<=ending_index;i++)
        {
            cout<<num[i]<<" ";
        }
        return max;
    }
   
};
