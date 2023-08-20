from datetime import date
anoAtual = date.today().year
maiores = menores = 0

for i in range(1, 8):
    nascimento = int(input("Em que ano a {}ª pessoa nasceu? ".format(i)))
    if anoAtual - nascimento >= 18:
        maiores += 1
    else:
        menores += 1


print("\nAo todo tivemos {} pessoas maiores de idade".format(maiores))
print("E também tivemos {} pessoas menores de idade".format(menores))

