mulheresMenores = somaIdade = somaMulher = anosVelho = 0
nomeVelho = ""

for i in range(1, 5):
    print("-----{}ª PESSOA -----".format(i))
    nome = input("Nome: ").strip()
    idade = int(input("Idade: "))
    sexo = input("Sexo [M/F]: ").strip().upper()

    somaIdade += idade

    if sexo == "M" and idade > anosVelho:
        anosVelho = idade
        nomeVelho = nome

    elif sexo == "F" and idade < 20:
        mulheresMenores += 1

media = somaIdade / 4

print("\nA média de idade do grupo é de {} anos".format(media))

if nomeVelho != "":
    print("O homem mais velho tem {} anos e se chama {}".format(anosVelho, nomeVelho))
else:
    print("Não foi informado nenhuma pessoa do sexo masculino!")

if mulheresMenores != 0:
    print("Ao todo são {} mulheres com menos de 20 anos".format(mulheresMenores))
else:
    print("Não foi informado nenhuma pessoa do sexo feminino com menos de 20 anos!")
