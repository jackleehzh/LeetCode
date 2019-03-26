//
//  string.c
//  LeetCode
//
//  Created by 李印臣 on 2019/3/26.
//  Copyright © 2019年 李印臣. All rights reserved.
//

#include "string.h"

int numJewelsInStones(char* J, char* S) {
    int total = 0;
    char *s1, *s2;
    
    s1 = J;
    
    while(*s1 != '\0'){
        s2 = S;
        while(*s2 != '\0'){
            if(*s1 == *s2) total++;
            s2++;
        }
        s1++;
    }
    
    return total;
}
