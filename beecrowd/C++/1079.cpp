#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdCasos;
    double p1, p2, p3;
    cin >> qtdCasos;

    for(int i = 0; i < qtdCasos; i++){
        cin >> p1 >> p2 >> p3;
        printf("%.1f\n", (((p1 * 2) + (p2 * 3) + (p3 * 5)) / 10));
    }
    return 0;
}