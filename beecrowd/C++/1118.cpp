#include <bits/stdc++.h>
using namespace std;

int main(){
    int opcao = 1;
    while(1){
        if(opcao == 1){
            int notasValidas = 0;
            float media = 0.0;
            while(notasValidas < 2){
                float nota;
                cin >> nota;
                if(nota <= 10 && nota >= 0){
                    notasValidas ++;
                    media += nota;
                } else {
                    printf("nota invalida\n");
                }
            }
            media /= 2;
            printf("media = %.2f\n", media);
            printf("novo calculo (1-sim 2-nao)\n");
            cin >> opcao;

        } else if(opcao == 2){
            break;
        } else {
            printf("novo calculo (1-sim 2-nao)\n");
            cin >> opcao;
        }
    }
    return 0;
}