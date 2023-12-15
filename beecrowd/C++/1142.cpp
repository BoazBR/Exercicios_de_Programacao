#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    num *= 4;

    for(int i = 1; i <= num; i++){
        if(i % 4 == 0){
            printf("PUM\n");
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}