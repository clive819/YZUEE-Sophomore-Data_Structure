/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/11/15
 */
#include "list.h"

int main(){
    struct LIST list1;
    init(&list1);
    insertlist(&list1, 10);
    insertlist(&list1, 3);
    insertlist(&list1, 7);
    insertlist(&list1, 50);
    printall(&list1);
    deletelist(&list1, 7);
    printall(&list1);
    insertlist(&list1, 33);
    printall(&list1);
}
