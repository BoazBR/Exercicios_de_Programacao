#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    double a, b, c, delta, r1, r2;
    cin >> a;
    cin >> b;
    cin >> c;

    delta = (b * b) - (4 * a * c);


    if(a == 0 || delta < 0){
        printf("Impossivel calcular\n");
    } else {
        r1 = ((-b + sqrt(delta)) / (2 * a));
        r2 = ((-b - sqrt(delta)) / (2 * a));

        printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
    }

 
    return 0;
}