from datetime import date
nascimento = int(input("Ano de nascimento: "))
atual = date.today().year
idade = atual - nascimento

print("Quem nasceu em {} tem {} anos em {}.".format(nascimento, idade, atual))

if idade < 18:
    print("Ainda faltam {} anos para o alistamento.".format(18 - idade))
    print("Seu alistamento será em {}.".format((18 - idade) + atual))
elif idade > 18:
    print("Você deveria ter se alistado a {} anos.".format(idade - 18))
    print("Seu alistamento foi em {}.".format(atual + 18 - idade))
elif idade == 18:
    print("Você deve se alistar esse ano!")
