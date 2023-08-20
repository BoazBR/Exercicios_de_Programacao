#include <bits/stdc++.h>
using namespace std;

int main(){
    double degraus, altura, comprimento, largura, pita;
    double area;
    
    while(cin >> degraus){
        cin >> altura;
        cin >> comprimento;
        cin >> largura;

        pita = sqrt(comprimento * comprimento + altura * altura);

        area = ((pita * largura) * degraus) / 10000;

        printf("%.4f\n", area);

    }

    return 0;
}