//
//  array.c
//  LeetCode
//
//  Created by 李印臣 on 2019/3/26.
//  Copyright © 2019年 李印臣. All rights reserved.
//

#include "array.h"

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize) {
    int *arr;
    int i = 0, j = ASize - 1, k = ASize - 1, a = -1, b = -1;
    
    arr = (int *)malloc(ASize * sizeof(int));
    
    while(i <= j){
        if(0 - a) a = A[i] * A[i];
        if(0 - b) b = A[j] * A[j];
        if(a > b){
            arr[k] = a;
            a = -1;
            i++;
        }else{
            arr[k] = b;
            b = -1;
            j--;
        }
        k--;
    }
    
    *returnSize = ASize;
    return arr;
}
