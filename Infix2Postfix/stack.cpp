#include "stack.h"

void push(STACK *s, char c, int priority){
    NODE *n = new NODE;
    n->c = c;
    n->priority = priority;
    if (is_empty(s)) {
        n->next = NULL;
    }
    else{
        n->next = s->top;
    }
    s->top = n;
    s->count++;
}

void pop(STACK *s){
    if (!is_empty(s)) {
        NODE *old = s->top;
        s->top = s->top->next;
        s->count--;
        free(old);
    }
}

void popall(STACK *s){
    while (!is_empty(s)) {
        printf("%c", s->top->c);
        NODE *old = s->top;
        s->top = s->top->next;
        s->count--;
        free(old);
    }
}

void init(STACK *s){
    s->count = 0;
    s->top = NULL;
}

bool is_empty(STACK *s){
    if (s->count == 0) {
        return true;
    }
    return false;
}
