#include <bits/stdc++.h>
using namespace std;

int main(){
    int positivos = 0;
    float a;
    for(int count = 0; count <= 5; count ++){
        cin >> a;
        if(a > 0){
            positivos ++;
        }
    }

    printf("%d valores positivos\n", positivos);


    return 0;
}