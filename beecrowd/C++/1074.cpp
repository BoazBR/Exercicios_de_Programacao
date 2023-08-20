#include <bits/stdc++.h>            //PRONTO!!!
using namespace std;

int main(){
    int num, qtd;
    cin >> qtd;
    
    for(int i = 0; i < qtd; i++){
        
        cin >> num;
        if(num == 0){
            printf("NULL\n");
        } else {
            if(num % 2 == 0){
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            if(num > 0){
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}