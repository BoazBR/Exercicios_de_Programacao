#include<stdio.h>

int main(){
    int a = 10, b = 20;
    int *p, *q;
    p = &a;
    *q = 10;
    q = &b;
    p = 15;
    *p = a;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}