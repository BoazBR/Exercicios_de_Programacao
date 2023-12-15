#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    while(x != 0){
        if(x % 2 != 0){
            x ++;
        }

        int total = x;

        for(int i = 1; i < 5; i++){
            total += x + i * 2;
        }

        printf("%d\n", total);
        
        
        cin >> x;
    }
    return 0;
}