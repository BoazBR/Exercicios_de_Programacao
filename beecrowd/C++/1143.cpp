#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    for(int i = 1; i <= num; i++){
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}