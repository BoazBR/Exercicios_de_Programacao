#include <bits/stdc++.h>
using namespace std;

int ord(int a, int b){
    if(a > b){
        return true;
    } else {
        return false;
    }
}

int main(){
    int casos, qtdNotas;
    cin >> casos;

    for(int i = 0; i<casos; i++){
        int contador = 0;
        cin >> qtdNotas;
        int notas[qtdNotas], notasNovas[qtdNotas];
        for(int j = 0; j<qtdNotas; j++){
            cin >> notas[j];
            notasNovas[j] = notas[j];
        }

        sort(notasNovas, notasNovas + casos, ord);

        for(int j = 0; j<=qtdNotas; j++){
            if(notas[j] == notasNovas[j]){
                contador ++;
            }
        }
        printf("%d\n", contador);
    }
    return 0;
}
