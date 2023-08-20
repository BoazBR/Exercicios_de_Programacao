#include <bits/stdc++.h>            //PRONTO!!!
using namespace std;

int main(){
    double vetor[6], media = 0.0;
    int count = 0;
    for(int  i = 0; i < 6; i++){
        cin >> vetor[i];
        if(vetor[i] >= 0){
            count ++;
            media += vetor[i];
        }
    }

    printf("%d valores positivos\n%.1f\n", count, (media = media / count));
    return 0;
}