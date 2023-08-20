import random

print("-="*30)
print("Vou pensar em um número entre 0 e 5. Tente adivinhar...")
print("-="*30)

escolhido = random.randint(0, 5)

num = int(input("Em que número pensei? "))

if escolhido == num:
    print("Parabéns, você, além de corno, é sabixão também!")
else:
    print("Você errou, seu filho da puta, eu pensei no número {}!!!".format(escolhido))