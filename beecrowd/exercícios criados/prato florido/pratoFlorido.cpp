#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, contador = 0;
    stack<char> entradas;
    stack<char> pratos;
    char prato;
    cin >> n;

    for(int i = 0; i < n; i++){             //pega entradas
        cin >> prato;
        entradas.push(prato);
    }

    for(int i = 0; i < n; i++){             //salva a pilha da maneira correta (do jeito que é exibida na tela), além de ver quantos 'p's são empilhados depois do 'P'.
        pratos.push(entradas.top());
        entradas.pop();

        if(pratos.top() == 'P'){
            i++;
            while(i < n){
                pratos.push(entradas.top());
                entradas.pop();
                contador ++;
                i++;
            }
            break;
        }

    }

    switch (contador){
    case 0:
        printf("0%%\n");
        break;
    
    case 1:
        printf("25%%\n");
        break;
    
    case 2:
        printf("50%%\n");
        break;

    case 3:
        printf("75%%\n");
        break;
    
    default:
        printf("100%%\n");
        break;
    }

    return 0;
}