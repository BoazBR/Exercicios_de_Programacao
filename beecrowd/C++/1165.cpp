#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;

    for(int i = 0; i < casos; i++){
        int num, primo = 0;
        cin >> num;
        for(int j = 2; j < ((num + 2) / 2); j++){
            if(num % j == 0){
                primo ++;
            } 
        }
        if(primo == 0){
            printf("%d eh primo\n", num);
        } else {
            printf("%d nao eh primo\n", num);
        }
    }
    return 0;
}