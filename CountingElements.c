//
// Created by CHANGCHUNGHUAN on 2020/8/23.
//
/* Given an integer array arr, count element 'x' such that x + 1 is also in arr.
   If there're duplicates in arr, count them separately. */

#include <stdio.h>

int countElements(int* arr, int arrSize) {
    bool isFound[1002] = {false};
    for (int i = 0; i < arrSize; i++) {
        isFound[arr[i]] = true;
    }
    int count = 0;
    for (int i = 0; i < arrSize; i++) {
        int x = arr[i];
        int xPlus1 = x + 1;
        if (isFound[xPlus1]) {
            count++;
        }
    }
    return count;
}
