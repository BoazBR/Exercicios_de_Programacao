#include <bits/stdc++.h>
using namespace std;

int main(){
    int j = 60, i = 1;
    while(j >= 0){
        printf("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }
    return 0;
}