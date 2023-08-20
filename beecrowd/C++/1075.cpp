#include <bits/stdc++.h>                //PRONTO!!!
using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i = 1; i <= 10000; i++){
        if(i % num == 2){
            printf("%d\n", i);
        }
    }
    return 0;
}