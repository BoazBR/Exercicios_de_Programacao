#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;

    for(int i = 0; i < casos; i ++){
        string cifrado, decifrado;
        cin >> cifrado;
        int deslocamento, deslocamentoOriginal;
        cin >> deslocamento;
        deslocamentoOriginal = deslocamento;

        
        for(int j = 0; j < cifrado.size(); j++){
            if(cifrado[j] - deslocamento < 65){
                cifrado[j] = 90;
                deslocamento --;
            }
            printf("%c", cifrado[j] - deslocamento);
            deslocamento = deslocamentoOriginal;
        }
        printf("\n");
    }

    return 0;
}