#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, qtdEspacos;
    cin >> num;

    while(num != 0){
        int matriz[num][num];

        for(int i = 0; i < num; i++){       
            for(int j = 0; j < num; j++){
                matriz[i][j] = pow(2, (i + j));
            }
        }

        for(int i = 0; i < num; i++){    
            
            for(int j = 0; j < num; j++){
                string num_str1(std::to_string(matriz[num - 1][j]));
                qtdEspacos = num_str1.size();   
                
                cout << ' ' << setw(qtdEspacos) << matriz[i][j];
            }
            printf("\n");
        }

        printf("\n");

        cin >> num;
    }

    return 0;
}