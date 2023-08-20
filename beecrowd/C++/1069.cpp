#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    string linha;
    cin >> casos;

    for(int i = 0; i < casos; i++){
        cin >> linha;
        stack<char> pilha;
        int diamantes = 0;

        for(int j = 0; j < linha.size(); j++){
            if(linha[j] == '<'){
                pilha.push('<');
            }
            if(linha[j] == '>'){
                if(pilha.size() > 0){
                    pilha.pop();
                    diamantes ++;
                }
            }
        }
        printf("%d\n", diamantes);  
    }
    
    return 0;
}