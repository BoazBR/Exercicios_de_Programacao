#include <bits/stdc++.h>
using namespace std;

int main (){
    int numCasos;
    cin >> numCasos;

    for(int i = 0; i < numCasos; i++){
        int a, b, total = 0;
        float crescA, crescB;
        cin >> a >> b >> crescA >> crescB;
        float acreA = (crescA / 100);
        float acreB = (crescB / 100);
        while(a <= b){
            a += a * acreA;
            b += b * acreB;
            total ++;
        }

        if(total <= 100){
            printf("%d anos.\n", total);
        } else {
            printf("Mais de 1 seculo.\n");
        }

    }

    return 0;
}