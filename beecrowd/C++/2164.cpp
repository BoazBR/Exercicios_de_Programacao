#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, resultado;
    cin >> n;

    resultado = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);

    printf("%.1f\n", resultado);

    return 0;
}