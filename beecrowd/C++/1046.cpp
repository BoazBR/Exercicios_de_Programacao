#include <bits/stdc++.h>
using namespace std;

int main(){

    int inicio, fim, tempo;

    cin >> inicio;
    cin >> fim;


    if(fim < inicio){
        tempo = 24 - inicio + fim;
    } else if(inicio == fim){
        tempo = 24;
    } else {
        tempo = fim - inicio;
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo);

    return 0;
}