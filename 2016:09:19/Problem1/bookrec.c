/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/09/19
 */
#include "bookrec.h"

void swap(struct book_rec *a, struct book_rec *b){
    struct book_rec tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(struct book_rec array[]){
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (j+1 < 5) {
                if (array[j].book_id > array[j+1].book_id) {
                    swap(&array[j], &array[j+1]);
                }
            }
        }
    }
}
