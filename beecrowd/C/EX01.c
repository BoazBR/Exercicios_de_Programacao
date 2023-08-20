#include <stdio.h>
#include <stdlib.h>

struct casa{
    int val;
    struct casa *proximo;

};

struct casa *inicio = NULL;

void insere(int val) {
   struct casa *novo = (struct casa*) malloc(sizeof(struct casa));

   novo->val = val;
   novo->proximo = inicio;
   inicio = novo;
}

int main(){
    int num, menor, maior, val;
    
    printf("Informe o número de posições do vetor: ");
    scanf("%d", &num);


    printf("Informe o valor que será armazenado na posição 0: ");
    scanf("%d", &val);
    menor = val;
    maior = val;
    insere(val);


    for(int i = 1; i < num; i++){
        printf("Informe o valor que será armazenado na posição %d: ", i);
        scanf("%d", &val);

        if(val > maior){
            maior = val;
        }

        if(val < menor){
            menor = val;
        }

        insere(val);
    }

    printf("O menor é %d, maior é %d, a diferença entre eles é %d.\n", menor, maior, maior - menor);
}