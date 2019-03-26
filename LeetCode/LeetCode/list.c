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
    struct ListNode *L = NULL, *curr = NULL, *p, *q;
    struct ListNode *node;
    int a = 0;
    
    p = l1;
    q = l2;
    while(p != NULL || q != NULL || a != 0){
        node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->next = NULL;
        
        if(L == NULL){
            L = node;
        }else{
            curr->next = node;
            
        }
        curr = node;
        curr->val = a;
        
        if(p != NULL){
            curr->val += p->val;
            p = p->next;
        }
        if(q != NULL){
            curr->val += q->val;
            q = q->next;
        }
        
        if(curr->val > 9){
            curr->val = curr->val - 10;
            a = 1;
        }else{
            a = 0;
        }
    }
    
    return L;
}
