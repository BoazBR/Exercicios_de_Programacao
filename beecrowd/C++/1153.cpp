#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, total = 0;
    cin >> num;
    total = num;

    for(int i = num - 1; i > 0; i--){
        total *= i;
    }

    printf("%d\n", total);
    return 0;
}