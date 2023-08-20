#include <bits/stdc++.h>            //PRONTO!!!
using namespace std;

int main(){
    int qtd, in = 0, out = 0;
    cin >> qtd;
    int num;

    for(int i = 0; i < qtd; i++){
        cin >> num;
        if(num >= 10 && num <= 20){
            in ++;
        } else {
            out ++;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}