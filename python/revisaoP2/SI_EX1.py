#Subs


def geraMatriz(col, lin, min, max):
    from random import randint
    matriz = []
    for l in range(lin):
        linhaMatriz = []
        for l in range(col):
            linhaMatriz.append(randint(min, max))
        matriz.append(linhaMatriz)
    return matriz


def mostraMatriz(matriz):
    print("-="*5, "Matriz Gerada", "=-"*5)
    for l in range(len(matriz)):
        print("|", end="")
        for c in range(len(matriz[l])):
            print("{:^5}".format(matriz[l][c]), end="|")
        print()
    return None


def maiorVizinhanca(matriz):
    matrizMaiorVizinhanca = []
    maior = soma = 0

    for

    return matrizMaiorVizinhanca





#PP

print("-=" * 5,"Gerando Matriz", "=-" * 5)
colunas = int(input("Número de colunas: "))
linhas = int(input("Número de linhas: "))
min = int(input("Valor mínimo: "))
max = int(input("Valor máximo: "))

matrizUser = geraMatriz(colunas, linhas, min, max)

mostraMatriz(matrizUser)

maiorVizinhanca(matrizUser)