/*
Question : Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. 
Then return the number of elements in nums which are not equal to val.
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {  //already declared array nums and integer variable val
        int n = nums.size();
        int k = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != val){
               nums[k] = nums[i];
               k++; 
            }
        }
        return k;
    }
};

/*
Explanation : 
Line 9 : initialise a variable n , which will store the size of the array
Line 10 : initialise a variable k, with its initial value 0, for counting the number of elements not equal to the val
Line 11 : a for loop is initialised that iterates all over the array
Logic : 
Suppose that nums = [3, 2, 2, 3] and val = 3

i   nums[i]	  Action	              nums (after copy)	  k
0	    3	      skip	                [3, 2, 2, 3]	      0
1	    2	  nums[0] = nums[1] → 2	    [2, 2, 2, 3]	      1
2	    2	  nums[1] = nums[2] → 2	    [2, 2, 2, 3]	      2
3	    3	     skip	                  [2, 2, 2, 3]	      2

At the end, you return k = 2, and the first k elements of nums are [2, 2].
*/
