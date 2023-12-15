#include <bits/stdc++.h>
using namespace std;

int main(){
    int alturaPulo, numCanos, alturaCanoNovo, resultado = 1, alturaCanoVelho;
    cin >> alturaPulo >> numCanos >> alturaCanoVelho;

    for(int i = 0; i < numCanos - 1; i++){
        cin >> alturaCanoNovo;
        if(abs(alturaCanoNovo - alturaCanoVelho) > alturaPulo){
            resultado = 0;
        }

        //printf("cano velho: %d >>> cano novo: %d >>> diferença: %d ou %d >> altura pulo: %d\n", alturaCanoVelho, alturaCanoNovo, alturaCanoVelho - alturaCanoNovo, alturaCanoNovo - alturaCanoVelho, alturaPulo);
        alturaCanoVelho = alturaCanoNovo;
    }

    if(resultado == 1){
        printf("YOU WIN\n");
    } else {
        printf("GAME OVER\n");
    }

    return 0;
}