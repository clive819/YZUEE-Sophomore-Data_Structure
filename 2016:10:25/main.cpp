/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/10/25
*/
#include "queue.h"
int main(){
    struct QUEUE queue1, queue2;
    create_queue(&queue1);
    create_queue(&queue2);
    int dataset[] = {5, 6, 7, 100, 156, 128, 33, 99, 600};
    for (int i=0; i<9; i++) {
        enqueue(&queue1, dataset[i]);
    }
    printf("queue1:\n");
    printALL(&queue1);
    while (!is_empty(&queue1)) {
        struct NODE *n = dequeue(&queue1);
        if (n->data > 100) {
            enqueue(&queue2, n->data);
        }
    }
    printf("queue2:\n");
    printALL(&queue2);
}
