#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;

    while(casos > 0){
        int temp, maior, menor, soma = 0;
        cin >> maior;
        cin >> menor;

        if(maior < menor){
            temp = menor;
            menor = maior;
            maior = menor;
        }

        if(menor > maior){
            maior = temp;
            maior = menor;
            menor = temp;
        }

        while(menor < maior){
            if(menor % 2 != 0){
                soma += menor;
            }
            menor ++;
        }

        printf("%d\n", soma);
        casos --;
    }


    return 0;
}
