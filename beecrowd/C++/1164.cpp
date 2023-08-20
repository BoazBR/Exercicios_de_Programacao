#include <iostream>
 
using namespace std;
 
int main() {

    int n, num;

    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        scanf("%d", &num);
        if(num==6 || num==28 || num==496 || num==8128 || num==33550336)
            printf("%d eh perfeito\n", num);
        else
            printf("%d nao eh perfeito\n", num);
    }

    return 0;
}