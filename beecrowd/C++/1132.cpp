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

    for(x; x <= y; x++){
        if(x % 13 != 0){
            temp += x;
        }
    }

    printf("%d\n", temp);

    return 0;
}