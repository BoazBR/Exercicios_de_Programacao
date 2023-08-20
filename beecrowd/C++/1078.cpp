#include <bits/stdc++.h>            //PRONTO!!!
using namespace std;

int main(){
    int num;
    cin >> num;

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, num, (num * i));
    }

    return 0;
}