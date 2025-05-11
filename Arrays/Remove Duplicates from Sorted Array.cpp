class Solution {
public:
    int removeDuplicates(vector<int>& nums) { // nums array is initialised 
        if(nums.empty()){  //checking for any elements in array, if the array is empty, return zero 
            return 0;
        }

        int i =0; // i is a slow pointer 
        for(int j = 1; j < nums.size(); j++){  //beginning of the logic 
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];  //overwriting the duplicate elements
            }
        }
        return i+1; //returning the no. of unique elements
    } 
};

/*
For example: 
If we have an array nums[2,3,3,4,5] then, 
Line 8 - initialises the value of a variable i as 0
Line 9 - initialises another variable j as 1 for checking on the next index, the for loop will iterate through all the elements in nums
Line 10 - 
j   i   nums[j]   nums[i]   nums[j] != nums[i]??   array nums[]
1   0     3         2          Yes                  [2,3,3,4,5] 
2   1     3         3          No                   [2,3,3,4,5]
3   1     4         3          Yes                  [2,3,4,5]
4   2     5         3          Yes                  [2,3,4,5]

The result : i = 2
The function will return i+1 = 3 as there are only 3 unique elements in the array
*/
