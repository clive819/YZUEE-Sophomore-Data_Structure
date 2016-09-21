/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/09/19
 */
#include <stdio.h>
#include "bookrec.h"

int main(){
    bookrec book;
    bookrec::book_rec array[5];
    int data_set[5][3] = {{3, 100,200}, {10, 1000,300}, {8, 20, 40}, {9, 99,150}, {1, 500,342}};
    for (int i=0; i<5; i++) {
        array[i].book_id = data_set[i][0];
        array[i].cost = data_set[i][1];
        array[i].page = data_set[i][2];
    }
    book.sort(array);
    for (int i=0; i<5; i++) {
        printf("book_id: %2d, cost: %4d, page: %3d\n", array[i].book_id, array[i].cost, array[i].page);
    }
}
