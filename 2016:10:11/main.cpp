/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/10/11
*/
#include "stack.h"

int main(){
    struct STACK s1, s2;
    push(&s1, 88);
    push(&s1, 60);
    push(&s1, 37);
    push(&s1, 50);
    for (int i=0; i<4; i++) {
        int data = pop(&s1);
        printf("stack1 - %d : %d\n", i, data);
        push(&s2, data);
    }
    printf("\n");
    for (int i=0; i<4; i++) {
        printf("stack2 - %d : %d\n", i, pop(&s2));
    }
    printf("\n");
}
