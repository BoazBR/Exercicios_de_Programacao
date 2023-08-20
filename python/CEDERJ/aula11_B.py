#Subs
def retiraCarro(dicionario):
    placa = input("Informe a placa do carro a ser retirado: ")

    if placa in dicionario:
        del dicionario[placa]

        print("Carro deletado!")
        print()

        pegaOpcao()

    else:
        print("PLACA NÃO EXISTE! Tente novamente.")
        print()

        pegaOpcao()

    return None


def adicionaCarro(dicionario):
    placa = input("Informe a placa do carro a ser adicionado: ")
    ano = int(input("Informe o ano do carro: "))
    cor = input("Informe a cor do carro: ")
    preco = float(input("Informe o preço do carro: "))

    if placa in dicionario:
        print("ESSA PLACA JÁ EXISTE! Tente novamente.")
        print()

    else:
        dicionario[placa] = (ano, cor, preco)
        print("Carro adicionado!")
        print()

    pegaOpcao()

    return None


def pegaOpcao():
    opcao = int(input("""Escolha uma opção:
-1 -> Retira um carro
0 -> Encerra o programa
1 -> Adiciona um carro
****Opção: """))
    print()

    while opcao != 0:
        if opcao == -1:
            retiraCarro(carros)

        elif opcao == 1:
            adicionaCarro(carros)

        else:
            print("OPÇÃO INVÁLIDA! Tente novamente.")
            print()

            pegaOpcao()

    return opcao


# PP

carros = {"HMY9966": (2010, "vermelho", 13599.99),
"GHF8965": (2012, "prata", 14990.00),
"LGH7821": (2008, "branco", 14399.99),
"GAY2424": (2014, "prata", 35600.00),
"CAP3746": (2016, "preto", 67900.00),
"OCU0000": (2015, "preto", 66700.00),
"TET4691": (2015, "azul", 45299.99),
"SGH1110": (2010, "prata", 50000.00)}

pcao = pegaOpcao()


