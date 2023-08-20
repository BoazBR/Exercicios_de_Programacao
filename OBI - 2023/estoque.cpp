#include <bits/stdc++.h>
using namespace std;

int main(){
    int tipos, tamanhos, pedidos, tipoPedido, tamanhoPedido, totalVendidos;

    cin >> tipos;
    cin >> tamanhos;

    int estoque[tipos][tamanhos];

    totalVendidos = 0;


    for(int i = 0; i < tipos; i++){
        for(int j = 0; j < tamanhos; j++){
            cin >> estoque[i][j];
            
        }
    }

    cin >> pedidos;
 

    for(int count = 0; count < pedidos; count++){
        cin >> tipoPedido;
        cin >> tamanhoPedido;

        if(estoque[tipoPedido-1][tamanhoPedido-1] >= 1){
            totalVendidos ++;
            estoque[tipoPedido-1][tamanhoPedido-1] --;
        }
    }



    printf("%d\n", totalVendidos);
    
    return 0;
}