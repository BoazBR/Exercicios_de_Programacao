#include <bits/stdc++.h>
using namespace std;

int main(){
    float total = 1.0;
    
    for(float i = 2.0; i <= 100.0; i++){
        total += 1 / i;
    }

    printf("%.2f\n", total);
    return 0;
}