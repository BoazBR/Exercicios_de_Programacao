#include <bits/stdc++.h>
using namespace std;

int main(){
    double raio1, x1, y1, raio2, x2, y2, distancia;
    while(cin >> raio1){
        cin >> x1;
        cin >> y1;
        cin >> raio2;
        cin >> x2;
        cin >> y2;

        distancia = sqrt(((x1 - x2) * (x1 - x2)) + ((y2 - y1) * (y2 - y1)));

        if((distancia + raio2) <= raio1){
            printf("RICO\n");
        } else {
            printf("MORTO\n");
        }



    }
    return 0;
}
