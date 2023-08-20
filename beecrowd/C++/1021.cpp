#include <bits/stdc++.h>
using namespace std; 
 
int main() {
 
    double valor;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, moeda100 = 0, moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda1 = 0;
    cin >> valor;

    while(valor >= 100){
        valor -= 100;
        nota100 ++;
    }

    if(valor >= 50){
        valor -= 50;
        nota50 ++;
    }

    while(valor >= 20){
        valor -= 20;
        nota20 ++;
    }

    if(valor >= 10){
        valor -= 10;
        nota10 ++;
    }

    if(valor >= 5){
        valor -= 5;
        nota5 ++;
    }

    while(valor >= 2){
        valor -= 2;
        nota2 ++;
    }

    if(valor >= 1){
        valor --;
        moeda100 ++;
    }

    if(valor >= 0.5){
        valor -= 0.5;
        moeda50 ++;
    }

    if(valor >= 0.25){
        valor -= 0.25;
        moeda25 ++;
    }

    while(valor >= 0.1){
        valor -= 0.1;
        moeda10 ++;
    }

    if(valor >= 0.05){
        valor -= 0.05;
        moeda5 ++;
    }

    while(valor >= 0.009){
        valor -= 0.01;
        moeda1 ++;
    }



    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n" , nota100, nota50, nota20, nota10, nota5, nota2, moeda100, moeda50, moeda25, moeda10, moeda5, moeda1);

    

    return 0;
}