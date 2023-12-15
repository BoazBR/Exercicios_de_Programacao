#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCasos;
    cin >> numCasos;

    for(int i = 0; i < numCasos; i++){
        int x, y, total;
        cin >> x >> y;
        if(x % 2 == 0){
            x ++;
        }

        total = x;

        for(int j = 1; j < y; j++){
            total += x + (j * 2);
        }
        printf("%d\n", total);
    }
    return 0;
}