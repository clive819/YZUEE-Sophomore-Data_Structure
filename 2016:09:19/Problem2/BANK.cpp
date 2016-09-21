/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/09/19
 */
#include "BANK.h"

BANK::BANK(){
    NT_cash = 0;
    US_cash = 0;
    type1_stock = 0;
    type2_stock = 0;
}

BANK::BANK(int nt, int us, int stock1, int stock2){
    NT_cash = nt;
    US_cash = us;
    type1_stock = stock1;
    type2_stock = stock2;
}

int BANK::sum_cash(){
    return NT_cash + US_cash;
}

int BANK::sum_stock(){
    return type1_stock + type2_stock;
}
