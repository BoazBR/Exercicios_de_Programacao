#include <bits/stdc++.h>

using namespace std;

int main(){

    float salario, imposto;

    scanf("%f", &salario);

    if(salario<=2000){
        printf("Isento\n");
    }
    else{
        if(salario<=3000)
            imposto += (salario-2000)*0.08;

        if(salario>3000 && salario<=4500){
            imposto += (salario-3000)*0.18;
            imposto += 1000*0.08;
        }

        if(salario>4500){
            imposto += 1000*0.08;
            imposto += 1500*0.18;
            imposto += (salario-4500)*0.28;
        }

        printf("R$ %.2f\n", imposto);
    }

    return 0;
}