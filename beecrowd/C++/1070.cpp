#include <bits/stdc++.h>

using namespace std;

int main(){

    int num1, i = 1;

    scanf("%d", &num1);

    if(num1%2==0)
        num1++;

    printf("%d\n", num1);

    while(i<=5){
    num1+=2;
    printf("%d\n", num1);
        i++;
    }

    return 0;
}
