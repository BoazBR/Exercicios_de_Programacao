#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, vetor[5], total = 0;
    cin >> t;
    for(int i = 0; i < 5; i++){
        cin >> vetor[i];
        if(vetor[i] == t){
            total ++;
        }
    }

    printf("%d\n", total);

    return 0;
}