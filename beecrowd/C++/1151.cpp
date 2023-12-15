#include <bits/stdc++.h>
using namespace std;

int fibonacci(int a){
    if(a < 2){
        return 1;
    }
    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main(){
    int a;
    cin >> a;

    printf("%d\n", fibonacci(a));

    return  0;
}