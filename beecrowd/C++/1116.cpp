#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    float x, y;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> x >> y;
        if(y != 0){
            printf("%.1f\n", x / y);
        } else {
            printf("divisao impossivel\n");
        }
    }
    return 0;
}