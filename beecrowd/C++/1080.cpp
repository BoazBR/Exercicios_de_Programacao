#include <bits/stdc++.h>

using namespace std;

int main(){

    int numeros[100], num, maior, posicao;

    scanf("%d", &maior);
    numeros[0] = num;

    for(int i=1; i<100; i++){
        scanf("%d", &num);
        numeros[i] = num;
        if(num>maior){
            maior = num;
            posicao = i+1;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}