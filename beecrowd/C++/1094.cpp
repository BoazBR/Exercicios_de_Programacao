#include <bits/stdc++.h>
using namespace std;

int main(){
    double qtd, qtdTemp = 0, total = 0, coelhos = 0, ratos = 0, sapos = 0;
    char bichoTemp;
    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        cin >> qtdTemp;
        cin >> bichoTemp;

        total += qtdTemp;

        switch (bichoTemp){
        
        case 'C':
            coelhos += qtdTemp;
            break;
        
        case 'R':
            ratos += qtdTemp;
            break;
        
        default:
            sapos += qtdTemp;
            break;
        }
    }

    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", coelhos);
    printf("Total de ratos: %.0f\n", ratos);
    printf("Total de sapos: %.0f\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", (coelhos / total * 100));
    printf("Percentual de ratos: %.2f %%\n", (ratos / total * 100));
    printf("Percentual de sapos: %.2f %%\n", (sapos / total * 100));

    return 0;
}