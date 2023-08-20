#include <bits/stdc++.h>

using namespace std;

int main(){

    float x;
    int reajuste;

    scanf("%f", &x);

    if(x<=400)
        reajuste = 15;
    else{
        if(x<=800)
            reajuste = 12;
        else{
            if(x<=1200)
                reajuste = 10;
            else{
                if(x<=2000)
                    reajuste = 7;
                else
                    reajuste = 4;
            }
        }
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", (x+(x/100*reajuste)), x/100*reajuste, reajuste);

    return 0;
}