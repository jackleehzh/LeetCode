//
//  queue.h
//  LeetCode
//
//  Created by 李印臣 on 2019/3/27.
//  Copyright © 2019年 李印臣. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include "tool.h"
typedef struct {
    int head;
    int tail;
    int len;
    int *queue;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k);
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);
bool myCircularQueueDeQueue(MyCircularQueue* obj);
int myCircularQueueFront(MyCircularQueue* obj);
int myCircularQueueRear(MyCircularQueue* obj);
void myCircularQueueFree(MyCircularQueue* obj);

#endif /* queue_h */
