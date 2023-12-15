#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    if(b == 0){
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main(){
    int numCasos;
    cin >> numCasos;

    for(int i = 0; i < numCasos; i++){
        int x, y, resultado;
        cin >> x >> y;

        resultado = mdc(x, y);

        printf("%d\n", resultado);

    }
    return 0;
}