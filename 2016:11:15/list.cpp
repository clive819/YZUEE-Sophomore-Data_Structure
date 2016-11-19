/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/11/15
*/
#include "list.h"

void init(struct LIST* list){
    list->count = 0;
    list->pre = NULL;
    list->head = NULL;
    list->loc = NULL;
    list->pos = NULL;
}

void insertlist(struct LIST* list, int key){
    if (!search(list, key)) {
        struct LIST_NODE *pnew = new LIST_NODE; // = (struct LIST_NODE*)malloc(sizeof(struct LIST_NODE));
        pnew->data = key;
        if (list->pre == NULL) {
            pnew->link = list->head;
            list->head = pnew;
        }
        else{
            pnew->link = list->pre->link;
            list->pre->link = pnew;
        }
        list->count++;
    }
}

bool deletelist(struct LIST* list, int key){
    if (search(list, key)) {
        if (list->count == 1) {
            list->head = NULL;
        }
        else if (list->pre == NULL) {
            list->head = list->loc->link;
        }
        else{
            list->pre->link = list->loc->link;
        }
        list->count--;
        free(list->loc);
        return true;
    }
    return false;
}

bool search(struct LIST* list, int key){
    if (list->count != 0) {
        int dataOut;
        getNext(list, 1, &dataOut);
        while (dataOut < key) {
            if (!getNext(list, 0, &dataOut)) {
                break;
            }
        }
        if (dataOut == key) {
            list->loc = list->pos;
            return true;
        }
    }
    return false;
}

void printall(struct LIST* list){
    if (list->count != 0) {
        int dataOut;
        getNext(list, 1, &dataOut);
        printf("%2d", dataOut);
        while (getNext(list, 0, &dataOut)) {
            printf(" -> %2d", dataOut);
        }
        printf("\n");
    }
}

bool getNext(struct LIST* list, int fromBegin, int* dataOut){
    if (list->count != 0) {
        if (fromBegin == 1) {
            list->pre = NULL;
            list->pos = list->head;
            *dataOut = list->pos->data;
            return true;
        }
        if (list->pos->link == NULL) {
            list->pre = list->pos;
            return false;
        }
        list->pre = list->pos;
        list->pos = list->pos->link;
        *dataOut = list->pos->data;
        return true;
    }
    return false;
}
