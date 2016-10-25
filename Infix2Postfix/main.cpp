// Infix -> Postfix 簡易版

#include "stack.h"

int main(){
    STACK symbol, parenthesis;
    init(&symbol);
    init(&parenthesis);
    int weight = 0;
    char str[100];
    scanf("%s", str);
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i] == '(') {
            push(&parenthesis, '(', 0);
            continue;
        }
        if (str[i] == ')') {
            pop(&parenthesis);
            continue;
        }
        weight = parenthesis.count * 10;
        if (str[i] == '+') {
            if (!is_empty(&symbol)) {
                if (1+weight > symbol.top->priority) {
                    push(&symbol, '+', 1+weight);
                }
                else{
                    popall(&symbol);
                    push(&symbol, '+', 1+weight);
                }
            }
            else{
                push(&symbol, '+', 1+weight);
            }
            continue;
        }
        if (str[i] == '-') {
            if (!is_empty(&symbol)) {
                if (1+weight > symbol.top->priority) {
                    push(&symbol, '-', 1+weight);
                }
                else{
                    popall(&symbol);
                    push(&symbol, '-', 1+weight);
                }
            }
            else{
                push(&symbol, '-', 1+weight);
            }
            continue;
        }
        if (str[i] == '/') {
            if (!is_empty(&symbol)) {
                if (2+weight > symbol.top->priority) {
                    push(&symbol, '/', 2+weight);
                }
                else{
                    popall(&symbol);
                    push(&symbol, '/', 2+weight);
                }
            }
            else{
                push(&symbol, '/', 2+weight);
            }
            continue;
        }
        if (str[i] == '*') {
            if (!is_empty(&symbol)) {
                if (2+weight > symbol.top->priority) {
                    push(&symbol, '*', 2+weight);
                }
                else{
                    popall(&symbol);
                    push(&symbol, '*', 2+weight);
                }
            }
            else{
                push(&symbol, '*', 2+weight);
            }
            continue;
        }
        printf("%c", str[i]);
    }
    popall(&symbol);
    printf("\n");
}
