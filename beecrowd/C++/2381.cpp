#include <bits/stdc++.h>
using namespace std;

bool ordenacaoTamanho(string n1, string n2){
    if(n1.length() < n2.length()){
        return true;
    } else {
        return false;
    }
}

int main(){
    int qtdAlunos, consulta;
    cin >> qtdAlunos >> consulta;
    string alunos[qtdAlunos];

    for(int a = 0; a < qtdAlunos; a ++){
        cin >> alunos[a];
    }

    sort(alunos, alunos + qtdAlunos);

    printf("%s\n", alunos[consulta - 1].c_str());

    return 0;
}