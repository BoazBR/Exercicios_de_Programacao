#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, temp;

    cin >> a;
    cin >> b;
    cin >> c;

    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }

    if(c > a){
        temp = a;
        a = c;
        c = temp;
    }

    if(b < c){
        temp = c;
        c = b;
        b = temp;
    }


    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(a * a == b * b + c * c){
            printf("TRIANGULO RETANGULO\n");
        }

        if(a * a > b * b + c * c){
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if(a * a < b * b + c * c){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(a == b && a == c){
            printf("TRIANGULO EQUILATERO\n");
        } else if(a == b || a == c || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }

        
    }

    return 0;
}