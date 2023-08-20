#include <iostream>
 
using namespace std;
 
int main() {

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if(y%x==0 || x%y==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}