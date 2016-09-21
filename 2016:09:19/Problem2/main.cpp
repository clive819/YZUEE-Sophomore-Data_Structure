/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/09/19
 */
#include <stdio.h>
#include "BANK.h"

int main(){
    BANK bk1 = BANK(10000, 100, 3000, 5000); // BANK bk1(10000, 100, 3000, 5000);
    BANK *bk2 = new BANK(250, 320, 110, 550);
    printf("total NT_cash in bk1 & bk2: %d\n", bk1.NT_cash + bk2->NT_cash);
    printf("total stock   in bk1 & bk2: %d\n", bk1.sum_stock() + bk2->sum_stock());
}
