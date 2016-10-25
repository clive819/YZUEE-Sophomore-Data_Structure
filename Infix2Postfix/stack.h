#ifndef stack_h
#define stack_h
#include <stdio.h>
#include <stdlib.h>
struct NODE{
    int priority;
    char c;
    NODE *next;
};
struct STACK{
    int count;
    NODE *top;
};
void push(STACK *s, char c, int priority);
void pop(STACK *s);
void popall(STACK *s);
void init(STACK *s);
bool is_empty(STACK *s);
#endif /* stack_h */
