#include <bits/stdc++.h>
using namespace std;

int main(){
    int numA, numB;
    char subsequencia = 'S';

    cin >> numA;
    cin >> numB;

    int seqA[numA];
    int seqB[numB];
    int confereSeqB[numB];

    for(int i = 0; i < numA; i++){
        cin >> seqA[i];
    }
    
    for(int i = 0; i < numB; i++){
        cin >> seqB[i];
        confereSeqB[i] = 0;
    }

    for(int i = 0; i < numB; i++){
        for(int j = 0; j < numA; j++){
            if(seqB[i] == seqA[j]){
                confereSeqB[i] = 1;  
            }
        }
    }

    for(int i = 1; i < numB; i++){
        if(seqB[i - 1] > seqB[i]){
            confereSeqB[i] = 0;
        }
    }

    for(int i = 0; i < numB; i++){
        if(confereSeqB[i] != 1){
            subsequencia = 'N';
        }
    }

    printf("%c\n", subsequencia);

    return 0;
}