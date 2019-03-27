//
//  queue.c
//  LeetCode
//
//  Created by 李印臣 on 2019/3/27.
//  Copyright © 2019年 李印臣. All rights reserved.
//

#include "queue.h"

/** Initialize your data structure here. Set the size of the queue to be k. */
MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* q = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    int i;
    
    q->head = 0;
    q->tail = 0;
    q->len = k;
    q->queue = NULL;
    
    while(q->queue == NULL){
        q->queue = (int *)malloc(k * sizeof(int));
    }
    
    for(i = 0; i < k; i++){
        q->queue[i] = -1;
    }
    return q;
}

/** Checks whether the circular queue is empty or not. */
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    if(obj->head == obj->tail && obj->queue[obj->head] == -1) return true;
    return false;
}

/** Checks whether the circular queue is full or not. */
bool myCircularQueueIsFull(MyCircularQueue* obj) {
    if(obj->head == obj->tail && obj->queue[obj->head] != -1) return true;
    return false;
}

/** Insert an element into the circular queue. Return true if the operation is successful. */
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if(myCircularQueueIsFull(obj)) return false;
    
    obj->queue[obj->head] = value;
    obj->head = (obj->head + 1) % obj->len;
    
    return true;
}

/** Delete an element from the circular queue. Return true if the operation is successful. */
bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj)) return false;
    obj->queue[obj->tail] = -1;
    obj->tail = (obj->tail + 1) % obj->len;
    return true;
}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj)) return -1;
    return obj->queue[obj->tail];
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj)) return -1;
    return obj->queue[(obj->head  + obj->len - 1) % obj->len];
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->queue);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * struct MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 * bool param_2 = myCircularQueueDeQueue(obj);
 * int param_3 = myCircularQueueFront(obj);
 * int param_4 = myCircularQueueRear(obj);
 * bool param_5 = myCircularQueueIsEmpty(obj);
 * bool param_6 = myCircularQueueIsFull(obj);
 * myCircularQueueFree(obj);
 */
