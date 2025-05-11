/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i=0; i<nums.size(); i++){
            result ^= nums[i]; // using Bitwise XOR operator 
        }
        return result;
    }
};

/*
In order to do this problem with a classic approach, we used the Bitwise XOR operator here. 
Why Bitwise XOR operator? 
 - as same bits in XOR operator returns 0 (example - a ^ a = 0)
 - different bits in XOR returns 1 (example - a ^ b = 1)
 - a bit XOR-ed by 0 always returns the same number (example- 0 ^ a = a)
 
This means that the duplicate numbers always cancel out to zero , while unique numbers always return the same number 
So, in order to find out the single number, we will use XOR operator

Line 11 - this will convert the integer values into bits and then XOR the values
*/
