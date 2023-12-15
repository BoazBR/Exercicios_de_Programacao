#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    while(cin >> casos){
        int vetor[casos];
        for(int i = 0; i < casos; i++){
            cin >> vetor[i];
        }
        sort(vetor, vetor + casos);
        for(int i = 0; i < casos; i++){
            printf("%04d\n", vetor[i]);
        }
    }
    return 0;
}