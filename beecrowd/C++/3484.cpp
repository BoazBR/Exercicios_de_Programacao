#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    stack<int> binario;


    while(num >= 1){
        binario.push(num % 2);
        num = num / 2;
    }

    int tamanho = binario.size();

    for(int i = 0; i < tamanho; i++){
        printf("%d", binario.top());
        binario.pop();
    }
    printf("\n");

    return 0;
}
