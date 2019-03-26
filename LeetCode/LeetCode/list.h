//
//  list.h
//  LeetCode
//
//  Created by 李印臣 on 2019/3/26.
//  Copyright © 2019年 李印臣. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdio.h>
#include <stdlib.h>
struct ListNode {
        int val;
        struct ListNode *next;
    };
struct ListNode* create(int a[], int n);
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
#endif /* list_h */
