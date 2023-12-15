#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos, forca;
    string nome;
    cin >> casos;

    for(int i = 0; i < casos; i++){
        cin >> nome;
        cin >> forca;
        if(nome == "Thor"){
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}