#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, n, total;
    cin >> a >> n;

    total = a;

    while(n <= 0){
        cin >> n;
    }

    for(int i = 1; i <= n-1; i++){
        total += a + i;
    }

    printf("%d\n", total);
    
    return 0;
}