#include <bits/stdc++.h>
using namespace std;

int main(){
    int operacoes;
    cin >> operacoes;
    string operacao;

    for(int i = 0; i < operacoes; i++){
        cin >> operacao;
        stack<int> presentes;
        int menores[1000];
        int presente;

        if(operacao == "PUSH"){
            cin >> presente;
            presentes.push(presente);
        } else if(operacao == "MIN"){

        } else {
            presentes.pop();
        }

    }   
    return 0;
}