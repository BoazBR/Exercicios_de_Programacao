#include <bits/stdc++.h>
using namespace std;

struct info{
    string horario;
    string nome;
    int diferenca;
};

int main(){
    int minutosAproximados, qtdRelatos;
    cin >> minutosAproximados >> qtdRelatos;
    info dados[qtdRelatos];

    for(int i = 0; i < qtdRelatos; i++){
        cin >> dados[i].horario;
        cin >> dados[i].nome;

        if(dados[i].horario[1] == 3){
            dados[i].diferenca = 60 - (int(dados[i].horario[3] * 10) + int(dados[i].horario[4]));
        } else {
            dados[i].diferenca = int(dados[i].horario[3] * 10) + int(dados[i].horario[4]);
        }
    }

    for(int i = 0; i < qtdRelatos; i++){
        printf("%s ", dados[i].nome.c_str());
        printf("%s ", dados[i].horario.c_str());
        printf("%d\n", dados[i].diferenca);
    }

    return 0;
}