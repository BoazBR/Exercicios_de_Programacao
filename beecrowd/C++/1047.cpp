#include <bits/stdc++.h>
using namespace std;

int main(){

    int horaInicio, minutoInicio, horaFim, minutoFim, tempoHoras, tempoMinutos;

    cin >> horaInicio;
    cin >> minutoInicio;
    cin >> horaFim;
    cin >> minutoFim;


    if(horaFim < horaInicio){
        tempoHoras = 24 - horaInicio + horaFim;
    } else if(horaInicio == horaFim && minutoFim == minutoInicio){
        tempoHoras = 24;
    } else if(horaInicio == horaFim && minutoFim > minutoInicio){
        tempoHoras = 0;
    } else if(horaInicio == horaFim && minutoFim < minutoInicio){
        tempoHoras = 24;
    } else {
        tempoHoras = horaFim - horaInicio;
    }

    if(minutoFim < minutoInicio){
        tempoMinutos = 60 + minutoFim - minutoInicio;
        tempoHoras --;
    } else if(minutoInicio == minutoFim){
        tempoMinutos = 0;
    } else {
        tempoMinutos = minutoFim - minutoInicio;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempoHoras, tempoMinutos);

    return 0;
}