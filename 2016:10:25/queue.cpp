/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/10/25
*/
#include "queue.h"

void create_queue(struct QUEUE *q){ // 初始化Queue
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
}

void enqueue(struct QUEUE *q, int data){ // 把東西塞到Queue
    struct NODE *n = new NODE; // 也可寫 (struct NODE*)malloc(sizeof(struct NODE));
    n->data = data;
    n->next = NULL;
    if (is_empty(q)) {
        q->front = n;
    }
    else{
        q->rear->next = n;
    }
    q->rear = n;
    q->count++;
}

struct NODE* dequeue(struct QUEUE *q){ // 傳回最上面那個節點
    if (is_empty(q)) {
        return NULL;
    }
    struct NODE *n = q->front;
    if (q->count == 1){
        q->front = NULL;
        q->rear = NULL;
    }
    else{
        q->front = q->front->next;
    }
    q->count--;
    return n;
}

void queue_front(struct QUEUE *q, struct NODE *n){ // 不知道要衝尛
    n = q->front;
}

void queue_rear(struct QUEUE *q, struct NODE *n){ // 這個也不知道在幹麻
    n = q->rear;
}

bool is_empty(struct QUEUE *q){ // 檢查Queue是不是空的
    if (q->count != 0) {
        return false;
    }
    return true;
}

void printALL(struct QUEUE *q){ // 印出Queue裡面的東東
    struct NODE *n = q->front;
    while (n != NULL) {
        printf("%4d|", n->data);
        n = n->next;
    }
    printf("\n");
}
