/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/10/11
*/
#ifndef stack_h
#define stack_h
#include <stdlib.h>
#include <stdio.h>
struct NODE{
    int data;
    struct NODE *link;
};
struct STACK{
    int count;
    struct NODE *top;
};
void push(struct STACK *s, int score);
int pop(struct STACK *s);
bool is_empty(struct STACK *s);
#endif /* stack_h */
