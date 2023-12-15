#include <bits/stdc++.h>
using namespace std;

int main(){
    int opcao = 1, count = 0, vitoriaInter = 0, vitoriaGremio = 0;
    while(opcao == 1){
        count ++;
        int placarInter, placarGremio;
        cin >> placarInter >> placarGremio;

        if(placarInter > placarGremio){
            vitoriaInter ++;
        } else if(placarInter < placarGremio){
            vitoriaGremio ++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        cin >> opcao;
    }

    printf("%d grenais\n", count);
    printf("Inter:%d\n", vitoriaInter);
    printf("Gremio:%d\n", vitoriaGremio);
    printf("Empates:%d\n", count - vitoriaGremio - vitoriaInter);

    if(vitoriaInter > vitoriaGremio){
        printf("Inter venceu mais\n");
    } else if(vitoriaInter < vitoriaGremio){
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
    return 0;
}