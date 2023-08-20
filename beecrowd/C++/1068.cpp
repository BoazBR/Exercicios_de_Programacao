#include <bits/stdc++.h>
using namespace std;

int main(){
    string linha;
    int verifica = 0;

    while(cin >> linha){
        stack<char> pilha;
        for(int i = 0; i < linha.size(); i++){
            if(linha[i] == '('){
                pilha.push('(');
            }
            if(linha[i] == ')'){
                if(pilha.size() > 0){
                    pilha.pop();
                } else {
                    verifica ++;
                    break;
                }
            }
        }

        if(pilha.size() == 0 && verifica == 0){
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
        verifica = 0;
    }
    

    return 0;
}