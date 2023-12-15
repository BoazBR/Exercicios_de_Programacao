#include <bits/stdc++.h>
using namespace std;

int fib(int x){
    if(x < 2){
        return x;
    } else {
        return fib(x - 1) + fib(x - 2);
    }
}

int main(){
    int numCasos;
    cin >> numCasos;

    for(int i = 0; i < numCasos; i++){
        int x, resultado = 0;
        cin >> x;

        resultado = fib(x);
        printf("fib(%d) = ???? calls = %d\n", x, resultado);
    }
    return 0;
}
