#include <bits/stdc++.h>
using namespace std;

int main(){
    int linhas, colunas;

    cin >> linhas;
    cin >> colunas;

    char matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            while(matriz[i][j] == 'o' && matriz[i+1][j] == '#' && matriz[i][j-1] == '.'){
                j--;
                matriz[i][j] = 'o';
            }
            if(matriz[i][j] == 'o' && matriz[i+1][j] == '#' && matriz[i][j+1] == '.'){
                matriz[i][j+1] = 'o';
            }
            if(matriz[i][j] == 'o' && matriz[i+1][j] == '.'){
                matriz[i+1][j] = 'o';
            }
            if(matriz[i - 1][j] == 'o' && matriz[i][j] == '.'){
                matriz[i][j] = 'o';
            }
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}