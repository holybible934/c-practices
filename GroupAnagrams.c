//
// Created by CHANGCHUNGHUAN on 2020/8/23.
//
/* Given an array of strings, group anagrams together. */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* orig;
    char* sorted;
} Pair;

int cmpChar(const void* a, const void* b) {
    return *(const char*)a - *(const char*)b;
}

int cmpPair(const void* a, const void* b) {
    const Pair* pa = (const Pair*)a;
    const Pair* pb = (const Pair*)b;
    return strcmp(pa->sorted, pb->sorted);
}

char *** groupAnagrams(char ** strs, int strsSize, int* returnSize, int** returnColumnSizes){
    Pair* pairArray = malloc(sizeof(Pair)*strsSize);
    for (int i = 0;i < strsSize; i++) {
        char* sorted_str = malloc(sizeof(char)*strlen(strs[i]+1));
        strcpy(sorted_str, strs[i]);
        qsort(sorted_str, strlen(sorted_str), sizeof(char), cmpChar)
        pairArray[i].orig = strs[i];
        pairArray[i].sorted = sorted_str;
    }

    qsort(pairs, strsSize, sizeof(Pair), cmpPair);
}