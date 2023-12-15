#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, temp;
    cin >> x >> y;

    if(x > y){
        temp = y;
        y = x;
        x = temp;
        temp = 0;
    }

    x++;

    for(x; x < y; x++){
        if(x % 5 == 2 || x % 5 == 3){
            printf("%d\n", x);
        }
    }

    return 0;
}