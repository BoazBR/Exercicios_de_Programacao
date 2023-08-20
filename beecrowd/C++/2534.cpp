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
    int habitantes, consultas;
    while (cin >> habitantes)
    {
        cin >> consultas;
        int vetor[habitantes];

        for(int i = 0; i < habitantes; i++){
            cin >> vetor[i];
        }

        sort(vetor, vetor + habitantes, ord);

        for(int i = 0; i < consultas; i++){
            int posicao;
            cin >> posicao;
            printf("%d\n", vetor[posicao-1]);
        }
    }
    return 0;
}