/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/10/11
*/

#include "stack.h"

bool is_empty(struct STACK *s){
    if (s->count == 0) {
        return true;
    }
    return false;
}

void push(struct STACK *s, int score){
    struct NODE *pnew =  (struct NODE*)malloc(sizeof(struct NODE)); //new NODE;
    pnew->data = score;
    if (is_empty(s)) {
        pnew->link = NULL;
    }
    else{
        pnew->link = s->top;
    }
    s->count++;
    s->top = pnew;
}

int pop(struct STACK *s){
    if (!is_empty(s)) {
        int data = s->top->data;
        struct NODE *old = s->top;
        s->top = s->top->link;
        s->count--;
        free(old);
        return data;
    }
    return NULL;
}
