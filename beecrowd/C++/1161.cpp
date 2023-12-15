#include <bits/stdc++.h>
using namespace std;

unsigned long long int fatoriais[20];

unsigned long long int fatora(int valor){
    unsigned long long int fatorado = 1;

    if(fatoriais[valor] != 0){
        return fatoriais[valor];
    }
    for(unsigned long long int i = 2, j = 2; i <= valor; i++, j++){
        fatorado *= i;
        if(fatoriais[i] == 0){
            fatoriais[i] = fatorado;
        }
        
    }

    return fatorado;
}

int main(){
    for(int i = 0; i <= 19; i++){
        fatoriais[i] = 0;
    }
    int m, n;
    unsigned long long int total;
    while(cin >> m >> n){
        total = fatora(m) + fatora(n);
        printf("%lld\n", total);
    }

    return 0;
}