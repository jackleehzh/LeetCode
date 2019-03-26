//
//  addTwoNumbers.c
//  LeetCode
//
//  Created by 李印臣 on 2019/3/26.
//  Copyright © 2019年 李印臣. All rights reserved.
//

/**
 * 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 * 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 * 示例：
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 */
#include "list.h"

struct ListNode* create(int a[], int n){
    struct ListNode *L = NULL, *p = NULL, *node;
    int i;
    for (i = 0; i < n; i++) {
        node = (struct ListNode *)malloc(sizeof(struct ListNode));
        if(L == NULL) {
            p = L = node;
        }else {
            p->next = node;
            p = p->next;
        }
        node->val = a[i];
        node->next = NULL;
    }
    return L;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *L = NULL, *cL, *l11, *l22;
    struct ListNode *node;
    int a = 0;
    
    l11 = l1;
    l22 = l2;
    while(l11 != NULL || l22 != NULL || a != 0){
        node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->next = NULL;
        
        if(L == NULL){
            L = node;
        }else{
            cL->next = node;
            
        }
        cL = node;
        
        if(l11 != NULL && l22 != NULL){
            cL->val = l11->val + l22->val + a;
            l11 = l11->next;
            l22 = l22->next;
        }else if(l11 != NULL){
            cL->val = l11->val + a;
            l11 = l11->next;
        }else if(l22 != NULL){
            cL->val = l22->val + a;
            l22 = l22->next;
        }else{
            cL->val = a;
        }
        
        if(cL->val > 9){
            cL->val = cL->val - 10;
            a = 1;
        }else{
            a = 0;
        }
    }
    
    return L;
}
