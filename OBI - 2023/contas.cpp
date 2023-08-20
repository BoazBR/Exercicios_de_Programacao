#include <bits/stdc++.h>
using namespace std;

int main(){
    int disponivel, acougue, farmacia, padaria, numContas, menor, meio, maior;
    numContas = 0;

    cin >> disponivel;
    cin >> acougue;
    cin >> farmacia;
    cin >> padaria;


    menor = acougue;
    meio = acougue;
    maior = acougue;

    if(farmacia < menor){
        menor = farmacia;
    }

    if(padaria < menor){
        menor = padaria;
    }

    if(farmacia > maior){
        maior = farmacia;
    }

    if(padaria > maior){
        maior = padaria;
    }

    if(farmacia > menor && farmacia < maior){
        meio = farmacia;
    }

    if(padaria > menor && padaria < maior){
        meio = padaria;
    }


    if(disponivel >= menor){
        numContas++;
        disponivel -= menor;
    }
    
    if(disponivel >= meio){
        numContas++;
        disponivel -= meio;
    }
    
    if(disponivel >= maior){
        numContas++;
        disponivel -= maior;
    }

    printf("%d\n", numContas);

    
    return 0;
}