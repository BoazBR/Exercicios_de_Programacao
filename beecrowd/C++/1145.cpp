#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    for(int i = 1; i <= y; i){
        for(int j = 1; j <= x; j++){
            if(j == x){
                printf("%d", i);    
            } else {
                printf("%d ", i);
            }
            i++;
        }
        printf("\n");
    }
    return 0;
}