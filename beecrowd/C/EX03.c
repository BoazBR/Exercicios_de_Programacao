#include <stdio.h>
#include <stdlib.h>

struct no {
    int dado;
    struct no *proximo;
};

struct no *inicio = NULL;

void mL() {
    struct no *ptr = inicio;
    int i=0; // isso não serva pra nada
    printf("\n[inicio] =>");
    while(ptr != NULL) {        
        printf(" %d =>",ptr->dado);
        ptr = ptr->proximo;
        i++; // isso aqui também não
    }
    printf(" [null]\n");
}

void iiL(int dado) {
    struct no *novo = (struct no*) malloc(sizeof(struct no));
    struct no *ptr = inicio;
    int t=1;
    while(ptr != NULL) {
        t=dado*t;
        ptr = ptr->proximo;
    }
    novo->dado = t;
    novo->proximo = inicio;
    inicio = novo;
}

int tamanhoLista() {

   struct no *ptr = inicio;
   int tamanho=0;

   while(ptr != NULL) {
      tamanho++;
      ptr = ptr->proximo;
   }
   return tamanho;
}

int buscaPrimeiro(int num){
    int posicao = -1;
    int contador = 0;

    struct no *ptr = inicio;

    while(ptr != NULL) {        
        if(ptr->dado == num){
            posicao = contador;
            break;
        }
        ptr = ptr->proximo;

        contador ++;
   }

    return posicao;
}

int main() {
    iiL(13);
    iiL(11);
    iiL(7);
    iiL(5);
    iiL(3);
    iiL(2);
    mL();

    printf("Tamanho da lista: %d\n", tamanhoLista());
    
    int praProcurar, posicao;
    printf("\nInforme um número para procurar no vetor: ");
    scanf("%d", &praProcurar);
    posicao = buscaPrimeiro(praProcurar);
    if (posicao != -1){
        printf("O número %d foi encontrado na posição %d do vetor.\n", praProcurar, posicao);

    } else {
        printf("O número %d não foi encontrado no vetor.\n", praProcurar);
    }
    
    
    return 0;
}