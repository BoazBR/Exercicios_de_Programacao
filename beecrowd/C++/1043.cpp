#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, a2, b2, c2, temp;
    cin >> a;
    cin >> b;
    cin >> c;

    a2 = a;
    b2 = b;
    c2 = c;

    if(a > c){
        temp = c;
        c = a;
        a = temp;
    }

    if(b > c){
        temp = c;
        c = b;
        b = temp;
    }

    if(a + b > c){
        printf("Perimetro = %.1f\n", a + b + c);
    } else {
        printf("Area = %.1f\n", ((a2 + b2) * c2) / 2);
    }

    

    return 0;
}