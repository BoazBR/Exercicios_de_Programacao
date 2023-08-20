peso = float(input("Peso da 1ª pessoa: "))
maior = menor = peso
for i in range(2, 6):
    peso = float(input("Peso da {}ª pessoa: ".format(i)))

    if peso > maior:
        maior = peso
    elif peso < menor:
        menor = peso

print("\nO menor peso lido foi {}".format(menor))
print("O maior peso lido foi {}".format(maior))
