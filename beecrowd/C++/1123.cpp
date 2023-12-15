#include <bits/stdc++.h>
using namespace std;

struct vertice{                             //estrutura do tipo vértice
  int id, distancia = INT_MAX;
  vector <struct vertice*> arestas;         //vetor de vértices
  vector <int> pesos;
  bool taNoVetor = false;
};

bool ord(struct vertice *vertice1, struct vertice *vertice2){
    if(vertice1->distancia > vertice2->distancia){
        return false;
    } else {
        return true;
    }
}

void custoRotaReal(int custoReal[], struct vertice destino){
    custoReal[destino.id] = 0;
    int idAtual = destino.id;
    while(idAtual != 0){
        idAtual = destino.id -1;
        for(int i = 0; i< destino.arestas.size(); ++i){
            if(idAtual == destino.arestas[i]->id){
                custoReal[idAtual] = custoReal[idAtual+1]+destino.pesos[i];
                destino = *destino.arestas[i];
                break;
            }
        }
    }
}

void dijkstra(struct vertice *origem){
    vector <struct vertice*> vertices;
    struct vertice* primeiro;
    vertices.push_back(origem);
    origem->taNoVetor = 1;
    origem->distancia = 0;
    while(!vertices.empty()){
        sort(vertices.begin(), vertices.end(), ord);
        primeiro = vertices[0];
        vertices.erase(vertices.begin());
        for(int i = 0; i < primeiro->arestas.size(); i++){
            if(primeiro->arestas[i]->taNoVetor == false){
                vertices.push_back(primeiro->arestas[i]);
                primeiro->arestas[i]->taNoVetor = 1;
                int dist = primeiro->arestas[i]->distancia;
                if(dist > primeiro->distancia + primeiro->pesos[i]){
                    primeiro->arestas[i]->distancia = primeiro->distancia + primeiro->pesos[i];
                }
            }
        }
    }
}

void exibeVertice(struct vertice vertice){
    printf("ID: %d\n", vertice.id);
    printf("Distância: %d\n", vertice.distancia);
    for(int i = 0; i < vertice.arestas.size(); i++){
        printf("%d -> ", vertice.arestas[i]->id);
    }
    printf("\n\n");
}

void addAresta(struct vertice *vertice1, struct vertice *vertice2, int peso){
    vertice1->arestas.push_back(vertice2);
    vertice1->pesos.push_back(peso);    
    
    vertice2->arestas.push_back(vertice1);
    vertice2->pesos.push_back(peso);
}

int main() {
    int n, m, c, k;
    cin >> n >> m >> c >> k;
    int custoReal[c];

    struct vertice vertices[n];
    for(int i = 0; i < n; ++i){
        struct vertice v;
        v.id = i;
        vertices[i] = v;
    }

    int u, v, p;
    for(int i = 0; i < m; ++i){
        cin >> u >> v >> p;
        addAresta(&vertices[u], &vertices[v], p);
    }

    custoRotaReal(custoReal, vertices[c-1]);

    for(int i = 0; i < c; ++i){
        cout << custoReal[i] << " ";
    }

    printf("\n");

    return 0;
}
