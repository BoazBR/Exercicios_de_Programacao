#include <bits/stdc++.h>

using namespace std;

int main(){

    int cod, qtd, x= 2;
    float total;

    scanf("%d", &cod);
    scanf("%d", &qtd);

    switch(cod){
        case 1:
            printf("Total: R$ %.2f\n", (qtd*4.0));
            break;
        case 2:
            printf("Total: R$ %.2f\n", (qtd*4.5));
            break;
        case 3:
            printf("Total: R$ %.2f \n", (qtd*5.0));
            break;
        case 4:
            printf("Total: R$ %.2f\n", (qtd*2.0));
            break;
        case 5:
            printf("Total: R$ %.2f\n", (qtd*1.5));
            break;
    }

    return 0;
}