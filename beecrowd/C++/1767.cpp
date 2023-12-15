#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCasos, pac, qtd, peso, totalBrinquedos = 0, totalPeso = 0, sobra = 0;
    cin >> numCasos;
    for(int i = 0; i < numCasos; i++){
        cin >> pac;
        float matriz [pac][3];
        
        for(int j = 0; j < pac; j++){
            cin >> qtd >> peso;
            matriz[i][0] = qtd;
            matriz[i][1] = peso;
            matriz[i][2] = peso/qtd;
            sobra += 1;
        }



        for(int j = 0; j < pac; j++){
            
        }

        printf("%d brinquedos\n", totalBrinquedos);
        printf("Peso: %d kg\n", totalPeso);
        printf("sobra(m) %d pacote(s)\n", sobra);
    }
    return 0;
}
