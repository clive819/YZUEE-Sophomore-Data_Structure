/*
 Student: 劉醇浩
 ID: s1040641
 Date: 2016/09/19
 */
#ifndef BANK_h
#define BANK_h
class BANK{
    public:
        int NT_cash, US_cash, type1_stock, type2_stock;
        BANK();
        BANK(int, int, int, int);
        int sum_cash();
        int sum_stock();
};
#endif /* BANK_h */
