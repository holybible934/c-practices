//
// Created by CHANGCHUNGHUAN on 2020/8/23.
//
/* Given a non-empty array of integers, every element appears twice except for one. Find that single one.
   Your algorithm should have a linear runtime complexity.
   Could you implement it without using extra memory?
   */
#include <stdio.h>

int singleNumber(int* nums, int numsSize){
    if (numsSize < 0) {
        return -1;
    }
    int n = nums[0];
    for (int i = 0;i < numsSize; i++) {
        n ^= nums[i];
    }
    return n;
}

int main(void) {
    int input[5] = {3, 56, 2, 2, 56};
    singleNumber(input, 5);
    return 0;
}
