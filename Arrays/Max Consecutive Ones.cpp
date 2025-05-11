/*
Problem : 
Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maximum = 0;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                count++;

                maximum = max(count, maximum);

            }
            if(nums[i] == 0){
                count = 0;
            }
        }
        return maximum;
    }
};
