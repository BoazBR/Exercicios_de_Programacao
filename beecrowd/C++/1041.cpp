#include <bits/stdc++.h>

using namespace std;

int main(){

    float x,y;

    scanf("%f", &x);
    scanf("%f", &y);

    if(x== 0 || y == 0){
        if(x== 0 && y == 0)
            printf("Origem\n");
        if(y!=0)
            printf("Eixo Y\n");
        if(x!=0)
            printf("Eixo X\n");
    }

    else{
        if(x>0){
            if(y>0)
                printf("Q1\n");
            else
                printf("Q4\n");
        }
        else{
            if(y>0)
                printf("Q2\n");
            else
                printf("Q3\n");
        }
    }

    return 0;
}