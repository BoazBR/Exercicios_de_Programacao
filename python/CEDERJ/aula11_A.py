# Subs

def criaDicionario():
    pessoas = dict()

    print("-="*20)

    nome = input("Nome: ")
    nome = nome[0:20]
    idade = int(input("Idade: "))

    while nome != "":
        print("-=" * 20)

        pessoas[nome] = idade
        nome = input("Nome: ")
        nome = nome[0:20]

        if nome != "":
            idade = int(input("Idade: "))

    print("-="*5, "FIM", "=-"*5)
    print()

    return pessoas


def pegaOpcao():
    opcao = int(input("""   ***Opções de exibição***
0 - Exibe da maneira armazenada
1 - Exibe ordenadamente pelo nome
2 - Exibe ordenadamente pela idade
>Opção desejada: """))

    print()

    return opcao


def mostraDicionario(dicionario, opcao):
    if opcao == 0:
        print("***Sem ordenação***")

        for pessoa in dicionario:
            print(pessoa, "-", dicionario[pessoa])

    elif opcao == 1:
        print("***Ordenado por nome***")

        for pessoa in sorted(dicionario):
            print(pessoa, "-", dicionario[pessoa])

    elif opcao == 2:
        print("***Ordenado por idade***")

        for pessoa in sorted(dicionario, key=dicionario.get):
            print(pessoa, "-", dicionario[pessoa])

    else:
        print("OPÇÃO INVÁLIDA! Tente novamente.")

        opcao = pegaOpcao()
        mostraDicionario(dicionario, opcao)

    return None


def calculaMedia(dicionario):
    somador = 0

    for pessoa in dicionario:
        somador += dicionario[pessoa]

    media = somador / len(dicionario)

    return media


def calculaMediana(dicionario):
    lista = []

    for pessoa in sorted(dicionario, key=dicionario.get):
        lista.append(dicionario[pessoa])

    if len(lista) % 2 == 0:
        mediana = (lista[int(len(lista) / 2)] + lista[int((len(lista) / 2) - 1)]) / 2
    else:
        mediana = lista[len(lista)]


    return mediana


def pegaMaiorNome(dicionario):
    maior = None

    for pessoa in dicionario:
        if maior == None:
            maior = pessoa

        if len(pessoa) > len(maior):
            maior = pessoa

    return maior


def pegaMenorNome(dicionario):
    menor = None

    for pessoa, idade in dicionario.items():
        if menor is None:
            menor = pessoa

        if len(pessoa) < (len(menor)):
            menor = pessoa

    return menor


# PP

pessoas = criaDicionario()
opcao = pegaOpcao()

print()

mostraDicionario(pessoas, opcao)
media = calculaMedia(pessoas)
mediana = calculaMediana(pessoas)
maiorNome = pegaMaiorNome(pessoas)
menorNome = pegaMenorNome(pessoas)

print()
print("Media:", media, "| Mediana:", mediana)
print("Maior nome:", maiorNome, "| Menor nome:", menorNome)


# Entrada

"""João
32
Ana
89
Carlos
33
Zacarias
56
Rodolfo
24
Lucas
67
Rosa
59
Lúcia
32

"""