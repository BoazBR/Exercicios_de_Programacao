#include <bits/stdc++.h>
using namespace std;

int achaIntervalo(int num, int salto){
    vector <int> vetor(num, 0);
    vetor[0] = 1;
    int controller = num -1;
    int regiao = 0;
    int resposta = 0;
    while(controller > 0){
        for(int i = 1; i < num; i++){
            if(vetor[i] == 0){
                regiao++;
            }
            if(regiao == salto){
                vetor[i] = 1;
                regiao = 0;
                controller--;
                resposta = i+1;
            }
        }
    }
    if(resposta==13){
        return salto;
    }
    return achaIntervalo(num, salto+1);
}

int main(){
    int num, salto;
    cin >> num;

    while(num != 0){
        salto = achaIntervalo(num, 1);
        printf("%d\n", salto);
        cin >> num;
    }
    
    return 0;
}