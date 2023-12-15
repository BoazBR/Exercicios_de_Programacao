#include <bits/stdc++.h>
using namespace std;

int main(){
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
    return 0;   
}