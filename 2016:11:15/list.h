/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/11/15
*/
#ifndef list_h
#define list_h
#include <stdlib.h>
#include <stdio.h>
struct LIST_NODE{
    int data;
    struct LIST_NODE* link;
};
struct LIST{
    int count;
    struct LIST_NODE* head;
    struct LIST_NODE* pos;
    struct LIST_NODE* pre;
    struct LIST_NODE* loc;
};
void init(struct LIST* list);
void insertlist(struct LIST* list, int key);
bool deletelist(struct LIST* list, int key);
bool search(struct LIST* list, int key);
void printall(struct LIST* list);
bool getNext(struct LIST* list, int fromBegin, int* dataOut);
#endif /* list_h */
