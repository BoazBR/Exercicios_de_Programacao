#include <bits/stdc++.h>
using namespace std;

int main(){
    for(float i = 0; i < 2.1; i += 0.2){
        if(i - (int)i == 0 || (i > 1.9 && i < 2.1)){
            printf("I=%d J=%d\n", (int)i, (int)i + 1);
            printf("I=%d J=%d\n", (int)i, (int)i + 2);
            printf("I=%d J=%d\n", (int)i, (int)i + 3);
        } else {
            printf("I=%.1f J=%.1f\n", i, i + 1);
            printf("I=%.1f J=%.1f\n", i, i + 2);
            printf("I=%.1f J=%.1f\n", i, i + 3);
        }
    }
    return 0;
}