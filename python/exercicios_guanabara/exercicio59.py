from time import sleep
primeiro = int(input("Primeiro valor: "))
segundo = int(input("Segundo valor: "))
opcao = resultado = 0

while opcao != 5:
    opcao = int(input("""    [1] SOMAR
    [2] MULTIPLICAR
    [3] MOSTRAR MAIOR
    [4] NOVOS NÚMEROS
    [5] SAIR DO PROGRAMA
>>>>> Qual é a sua opção? """))

    if opcao == 1:
        print("O resultado de {} + {} é {}.".format(primeiro, segundo, primeiro + segundo))

    elif opcao == 2:
        print("O resultado de {} X {} é {}.".format(primeiro, segundo, primeiro * segundo))

    elif opcao == 3:
        if primeiro >= segundo:
            print("{} é maior que {}.".format(primeiro, segundo))
        else:
            print("{} é maior que {}.".format(segundo, primeiro))

    elif opcao == 4:
        print("Informe outros valores.")
        primeiro = int(input("Primeiro valor: "))
        segundo = int(input("Segundo valor: "))

    elif opcao > 5:
        opcao = int(input("Opção inválida!!! tente novamente: "))

    else:
        print("Finalizando...")
        sleep(0.5)

    print("="*30)
    sleep(1)

print("***FIM DO PROGRAMA***")