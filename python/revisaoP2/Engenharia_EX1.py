# Subs


def geraMatriz(numL, numC, men, mai):
    from random import randint

    matriz = []
    for linha in range(numL):
        linhaDeM = []
        for coluna in range(numC):
            linhaDeM.append(randint(men, mai))
        matriz.append(linhaDeM)

    return matriz


def mostraMatriz(m):
    print("-=" * 5, "Matriz Gerada", "=-" * 5)

    for l in range(len(m)):
        print("|", end="")
        for c in range(len(m[l])):
            print('{:^5}'.format(m[l][c]), end=" | ")
        print()
    return None


def posicaoMaior(matriz):
    linMaior = colMaior = maior = 0

    for l in range(len(matriz)):
        for c in range(len(matriz[l])):
            if matriz[l][c] > maior:
                maior = matriz[l][c]
                linMaior = l
                colMaior = c

    return maior, linMaior, colMaior


def somaLin(matriz, linha):
    soma = 0
    for coluna in range(len(matriz[linha])):
        soma += matriz[linha][coluna]

    return soma

def multiplicaLin(matriz, coluna):
    produto = 1

    for l in range(len(matriz)):
        for c in range(len(matriz[l])):
            if coluna == c:
                produto *= matriz[l][c]
    return produto


# PP


print("-=" * 5, "Gerando matriz", "=-" * 5)
linhas = int(input("Número de linhas: "))
colunas = int(input("Número de colunas: "))
menor = int(input("Menor valor: "))
maior = int(input("Maior valor: "))

print()

matrizUsr = geraMatriz(linhas, colunas, menor, maior)

mostraMatriz(matrizUsr)

maior, linM, colM = posicaoMaior(matrizUsr)

print()
print("-=" * 7, "Maior", "=-" * 7)
print("Maior: {} | Linha: {}ª | Coluna: {}ª".format(maior, linM + 1, colM + 1))
print("-"*30)

somaMaiorLinha = somaLin(matrizUsr, linM)

print("Soma da linha do maior número: ", somaMaiorLinha)

produtoMaiorColuna = multiplicaLin(matrizUsr, colM)

print("Produto da coluna do maior número: ", produtoMaiorColuna)
