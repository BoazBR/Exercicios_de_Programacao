#include <bits/stdc++.h>
using namespace std;

struct vertice{                                                             //cria uma estrutura do tipo vértice
    int id;
    double distancia = 9999999999999999;
    bool taNoVetor = false;
    bool visitado = false;
    vector<double> pesos;                                                   //vetor de pesos das arestas
    vector<struct vertice *> arestas;                                       //vetor de arestas
};

void addAresta(struct vertice *v1, struct vertice *v2, double peso){        //Cria arestas
    v1->arestas.push_back(v2);                                              //adiciona v2 na lista de arestas do v1
    v1->pesos.push_back(peso);                                              //adiciona peso da aresta na lista de pesos do v1

    v2->arestas.push_back(v1);                                              //adiciona v1 na lista de arestas do v2
    v2->pesos.push_back(peso);                                              //adiciona peso da aresta na lista de pesos do v2
}

bool ordena(struct vertice *v1, struct vertice *v2){
        return v1->distancia > v2->distancia;
}

void dijkstra(struct vertice *origem){
    origem->distancia = 0;
    vector<struct vertice *> vetorOrdanado;                                 //cria vetor de vertices para analisar
    origem->taNoVetor = true;
    vetorOrdanado.push_back(origem);                                        //coloca origem no vetor de vertices para analisar

    while(vetorOrdanado.size() > 0){
        sort(vetorOrdanado.begin(), vetorOrdanado.end(), ordena);           //ordena vetor
        struct vertice *v = vetorOrdanado.back();                           //pega último elemento do vetor
        vetorOrdanado.pop_back();                                           //apaga último elemento do vetor
        v->visitado = true;

        for(int i = 0; i < v->arestas.size(); i++){                         
            if(v->arestas[i]->taNoVetor == false){
                v->arestas[i]->taNoVetor = true;
                vetorOrdanado.push_back(v->arestas[i]);
            }
            double dist = v->distancia + v->pesos[i];
            if(dist < v->arestas[i]->distancia){
                v->arestas[i]->distancia = dist;
            }
        }
    }
}

void printVertice(struct vertice v){                                        //Exibe vertices
    printf("ID = %d\n", v.id);
    printf("Arestas(%ld): ", v.arestas.size());
    for(int i = 0; i < v.arestas.size(); i++){
        printf("%d ", v.arestas[i]->id);
    }
    printf("\nDistancia(%.2f): \n", v.distancia);
}

int main(){
    int qtdIlhas, qtdCabos;

    /*
    struct vertice v1;
    v1.id = 1;

    struct vertice v2;
    v2.id = 2;

    struct vertice v3;
    v3.id = 3;
    
    struct vertice v4;
    v4.id = 4;
    
    struct vertice v5;
    v5.id = 5;

    addAresta(&v1, &v2, 4);
    addAresta(&v1, &v3, 1);
    addAresta(&v3, &v2, 2);
    addAresta(&v2, &v4, 5);
    addAresta(&v3, &v5, 3);
    addAresta(&v4, &v5, 1);

    dijkstra(&v1);

    printVertice(v4);

    */

    return 0; 
}
