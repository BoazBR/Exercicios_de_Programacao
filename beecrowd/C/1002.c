#include <stdio.h>
 
int main() {
    double area;
    double raio, pi = 3.14159;
    scanf("%lf", &raio);

    area = (double) (pi * (raio * raio));
    printf("A=%f\n", area);
 
    return 0;
}