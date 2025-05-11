/*
Problem: 
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

/*
Explanation : 
Line 10 : array nums is initialised already 
Line 11 : initialise a variable j whose value is 0
Line 12 : initialising a variable n for getting the size of the array
Line 13 : for loop iterates all along the array 
Line 14 -16 : Logic 

Suppose we have an array nums = [0,1,0,3,12]

i    action   swap(nums[])    j
0    skip     [0,1,0,3,12]    0
1    swap     [1,0,0,3,12]    1
2    skip     [1,0,0,3,12]    1
3    swap     [1,3,0,0,12]    2  
4    swap     [1,3,12,0,0]    3

Final result :  nums =  [1,3,12,0,0] 

*/
