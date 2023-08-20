#include <iostream>
using namespace std;
 
int main() {
    int num, count;
    count = 0;
    cin >> num;
    char vetor[num];

    for(int i = 0; i < num; i++){
        cin >> vetor[i];

        if((vetor[i] == 'a' && i > 0 && vetor[i-1] == 'a') || (vetor[i] == 'a' && i <   num && vetor[i+1] == 'a')){
            count ++;
        }
    }

    printf("%d\n", count);

    return 0;
}