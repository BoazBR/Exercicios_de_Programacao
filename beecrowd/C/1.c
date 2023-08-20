#include <stdio.h>
#include <stdlib.h>

struct no{
    int dado;
    struct no *proximo;
    struct no *anterior;
};

struct no *inicio = NULL;
struct no *final = NULL;



//imprime elementos da lista
void imprimeLista() {

    struct no *ptr = inicio;

    printf("\n[inicio] =>");
    while(ptr != NULL) {        
        printf(" %d =>",ptr->dado);
        ptr = ptr->proximo;
   }

    printf(" [null]\n");
}




//insere na primeira posicao
void insereInicio(int dado) {


    //cria novo
    struct no *novo = (struct no*) malloc(sizeof(struct no));

    if(inicio != NULL){
        inicio -> anterior = NULL;
    }


    if(final == NULL){
        final -> proximo = novo;
    }


    //link->chave = chave;
    novo->dado = dado;

    //aponta para o antigo primeiro no
    novo->proximo = inicio;


    novo->anterior = NULL;

    if(final == NULL){
        final -> proximo = novo;
    }

    //aponta para o novo primeiro no
    inicio = novo;
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
    insereInicio(11);
    insereInicio(7);
    insereInicio(5);
    insereInicio(3);
    insereInicio(2);

    imprimeLista();

    printf("%d \n", buscaPrimeiro(7));
    return 0;
}