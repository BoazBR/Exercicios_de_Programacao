#include <bits/stdc++.h>
using namespace std;

int main(){
    string linha;
    while(getline(cin, linha)){
        char ultimaLetra = 'm';
        for(int i = 0; i < linha.size(); i++){
            if(linha[i] >= 97 && ultimaLetra == 'm'){
                linha[i] -= 32;
                ultimaLetra = 'M';
            }else if(linha[i] <= 90 && ultimaLetra == 'M' && linha[i] != ' '){
                linha[i] += 32;
                ultimaLetra = 'm';
            } else if(linha[i] == ' '){
                i++;
            } else {
                ultimaLetra = 'm';
            }
        }
        cout << linha << endl;
    }
    return 0;
}