/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/09/19
*/
#include <stdio.h>
#include "bookrec.h"

int main(){
    struct book_rec array[5];
    int dataset[5][3] = {{3, 100,200}, {10, 1000,300}, {8, 20, 40}, {9, 99,150}, {1, 500,342}};
    for (int i=0; i<5; i++) {
        array[i].book_id = dataset[i][0];
        array[i].cost = dataset[i][1];
        array[i].page = dataset[i][2];
    }
    sort(array);
    for (int i=0; i<5; i++) {
        printf("book_id:%4d, cost:%4d, page:%4d\n", array[i].book_id, array[i].cost, array[i].page);
    }
}
