#include <stdio.h>

int main(){
    int base, altura, area;
    
    printf("Informe a base:\n");
    scanf("%i", &base);
    printf("Informe a altura:\n");
    scanf("%i", &altura);

    area = base * altura;

    printf("A área do rétângulo é = %i \n", area);

    return 0;
}