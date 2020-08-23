//
// Created by CHANGCHUNGHUAN on 2020/8/23.
//
/* Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

   Example:
   Input: [0,1,0,3,12]
   Output: [1,3,12,0,0]
   Note:

   You must do this in-place without making a copy of the array.
   Minimize the total number of operations.
   */

void moveZeroes(int* nums, int numsSize){
    int 2ndIndex = 0;
    for (int index = 0; index < numsSize; index++) {
        if (nums[index] != 0) {
            nums[2ndIndex++] = nums[index];
        }
    }
    while (2ndIndex < numsSize) {
        nums[2ndIndex++] = 0;
    }
}
