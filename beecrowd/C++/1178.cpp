#include <bits/stdc++.h>
using namespace std;

int main(){
    double num, vetor[100];
    cin >> num;
    vetor[0] = num;
    printf("N[0] = %.4f\n", num);
    for(int i = 1; i <= 99; i++){
        vetor[i] = vetor[i-1] / 2;
        printf("N[%d] = %.4f\n", i, vetor[i]);
    }
    return 0;
}