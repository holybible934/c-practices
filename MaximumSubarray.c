//
// Created by CHANGCHUNGHUAN on 2020/8/23.
//
/* Given an integer array nums, find the contiguous subarray,
   containing at least one number which has the largest sum and return its sum.
    */

int maxSubArray(int* nums, int numsSize) {
    int max = nums[0];

    for (int i = 0; i < numsSize; i++) {
        int sum = 0;
        for (int j = i; j < numsSize; j++) {
            sum += nums[j];
            sum = sum > max ? sum : max;
        }
    }

    return max;
}