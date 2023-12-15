#include <bits/stdc++.h>
using namespace std;

int main(){
    int idade, contador = 0;
    float media;
    cin >> idade;
    while(idade >= 0){
        contador ++;
        media += idade;
        cin >> idade;
    }

    media /= contador;
    printf("%.2f\n", media);
    return 0;
}