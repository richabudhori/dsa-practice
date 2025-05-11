/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n*(n+1)/2;
        int actualSum = 0;

        for(int i=0; i<n; i++){
            actualSum += nums[i];
        }
        return expectedSum - actualSum;
    }
};
/*
We have taken two variables - one for finding the expected sum of the total numbers in an array from 0 to n (expected sum), and the sum of the numbers 
given (actual sum). The basic logic here is to subtract both so that we get the missing number in the array 

The code will work this way :

Assume the array - [3,0,1]
n = 3
expected sum = 3*(3+1)/2 = 6 
i   nums[i]   actualSum += nums[i]   
0     3             0+3 = 3
1     0             3+0 = 3
2     1             3+1 = 4

return expectedSum - actualSum = 6-4 = 2
So, the missing number = 2
*/
