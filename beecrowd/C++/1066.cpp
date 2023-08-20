#include <bits/stdc++.h>            //PRONTO!!!
using namespace std;

int main(){
    int num, pares = 0, impares = 0, positivos = 0, negativos = 0;
    for(int  i = 0; i < 5; i++){
        cin >> num;
        if(num % 2 == 0){
            pares ++;
        } else {
            impares ++;
        }

        if(num > 0){
            positivos ++;
        } else if(num < 0) {
            negativos ++;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impares, positivos, negativos);
    return 0;
}