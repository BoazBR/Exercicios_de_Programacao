#include <bits/stdc++.h>
using namespace std;

int main(){
    int numeroDePortoes, minutosPorPortao, senhasPorPortao, senha, verdadeira, saiu = 1;
    cin >> numeroDePortoes >> minutosPorPortao >> senhasPorPortao;

    for(int i = 0; i < numeroDePortoes; i++){
        stack <int> verdadeiras;
        for(int j = 0; j < senhasPorPortao; j++){
            cin >> senha;
            cin >> verdadeira;
            verdadeiras.push(verdadeira);
        }
        for(int j = 0; j < senhasPorPortao; j++){
            if(verdadeiras.top() == 1 && j < 5){
                
            }
        }
    }
    return 0;
}