/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/10/25
*/

#ifndef queue_h
#define queue_h
#include <stdio.h>
#include <stdlib.h>
struct NODE{
    int data;
    struct NODE *next;
};
struct QUEUE{
    int count;
    struct NODE *front, *rear;
};
void create_queue(struct QUEUE *q);
void enqueue(struct QUEUE *q, int data);
struct NODE* dequeue(struct QUEUE *q);
void queue_front(struct QUEUE *q, struct NODE *n);
void queue_rear(struct QUEUE *q, struct NODE *n);
bool is_empty(struct QUEUE *q);
void printALL(struct QUEUE *q);
#endif /* queue_h */
