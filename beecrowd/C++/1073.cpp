#include <bits/stdc++.h>            //PRONTO!!!
using namespace std;

int main(){
    int num;
    cin >> num;
    
    for(int i = 2; i <= num; i+= 2){
        
        if(num % 2 == 0)
            printf("%d^2 = %.0f\n", i, (pow(i, 2)));
    }

    return 0;
}