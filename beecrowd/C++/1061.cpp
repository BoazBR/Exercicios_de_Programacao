#include <bits/stdc++.h>
using namespace std;

int main(){

    int dias1, horas1, minutos1, segundos1, dias2, horas2, minutos2, segundos2;
    string lixo;
    cin >> lixo >> dias1 >> horas1 >> lixo >> minutos1 >> lixo >> segundos1 >> lixo >> dias2 >> horas2 >> lixo >> minutos2 >> lixo >> segundos2;

    if(segundos2 < segundos1){
        minutos2 --;
        segundos2 += 60;
    }
    segundos2 -= segundos1;


    if(minutos2 < minutos1){
        horas2 --;
        minutos2 += 60;
    }
    minutos2 -= minutos1;

    if(horas2 < horas1){
        dias2 --;
        horas2 += 24;
    }
    horas2 -= horas1;

    dias2 -= dias1;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias2, horas2, minutos2, segundos2);
    return 0;
}