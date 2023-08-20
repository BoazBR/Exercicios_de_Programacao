soma = 0
cont = 0
for i in range(0, 6):
    num = int(input("Digite um valor:"))
    if num % 2 == 0:
        soma += num
        cont += 1

print("Você informou {} números pares e a soma deles é {}".format(cont, soma))