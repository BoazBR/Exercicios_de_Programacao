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

    for(int x = 0; x <= 27; x++){
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                if(matriz[i][j] == 'o' && matriz[i+1][j] == '#' && matriz[i][j-1] == '.'){
                    for(int count = j; count >= 0; count --){
                        if(matriz[i][count] == 'o' && matriz[i+1][count] == '#' && matriz[i][count - 1] == '.'){
                            matriz[i][count - 1] = 'o';
                        }
                    }
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
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
