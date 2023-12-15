#include <bits/stdc++.h>
using namespace std;

int main(){
    int numPalavras;
    cin >> numPalavras;
    

    for(int i = 0; i < numPalavras; i++){
        string palavra;
        cin >> palavra;
        int total = 1;

        for(int j = 0; j < palavra.size(); j++){
            if(palavra[j] == 'A' || palavra[j] == 'E' || palavra[j] == 'I' || palavra[j] == 'O' || palavra[j] == 'S' || palavra[j] == 'a' || palavra[j] == 'e' || palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 's'){
                total *= 3;
            } else {
                total *= 2;
            }
        }

        cout << total << endl;
    }

    return 0;
}