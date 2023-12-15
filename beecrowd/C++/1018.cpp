#include <bits/stdc++.h>
using namespace std;

int valoresNotas[] = {100, 50, 20, 10, 5, 2, 1};

void trocaDinheiro(int valor, int count){   
    if(count == 7){
        return;
    }

    printf("%d nota(s) de R$ %d,00\n", valor/valoresNotas[count], valoresNotas[count]);
    valor%=valoresNotas[count];
    
    trocaDinheiro(valor, count + 1);
}

int main(){
    int valor, qtdNotas[7];
    cin >> valor;

    printf("%d\n", valor);
    trocaDinheiro(valor, 0);

    return 0;
}