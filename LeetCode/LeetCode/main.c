//
//  main.c
//  LeetCode
//
//  Created by 李印臣 on 2019/3/26.
//  Copyright © 2019年 李印臣. All rights reserved.
//

#include <stdio.h>
#include "list.h"

int main(int argc, const char * argv[]) {
    int b[] = {1, 3, 5};
    int c[] = {2, 4, 6};
    struct ListNode *L1 = create(b, 3);
    struct ListNode *L2 = create(c, 3);
    struct ListNode *L3 = addTwoNumbers(L1, L2);
    while (L3 != NULL) {
        printf("%d ", L3->val);
        L3 = L3->next;
    }
    return 0;
}
