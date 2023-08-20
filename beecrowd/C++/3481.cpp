#include <bits/stdc++.h>
using namespace std;

int main(){
    string mensagem;
    stack<char> caracteres;
    getline(cin, mensagem);

    for(int i = 0; i < mensagem.size(); i++){
        if(mensagem[i] == '#' && caracteres.size() > 0){
            caracteres.pop();
        }else if(mensagem[i] == '#'){

        } else {
            caracteres.push(mensagem[i]);
        }
    }

    int tamanho = caracteres.size();
    for(int j = 0; j < tamanho; j++){
        printf("%c", caracteres.top());
        caracteres.pop();
    }
    printf("\n");

    return 0;
}
