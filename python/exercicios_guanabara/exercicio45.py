import time
import random

print("+=" * 3, "JOKENPÔ", "=+" * 3)

jogador = int(input('''Escolha entre:
[ 1 ] Pedra
[ 2 ] Papel
[ 3 ] Tesoura

Sua escolha:'''))

if jogador != 1 and jogador != 2 and jogador != 3:
    print("OPÇÃO INVÁLIDA! Tente novamente!")
else:
    print("JO")
    time.sleep(1)
    print("KEN")
    time.sleep(1)
    print("PÔ!!! \n")

    pc = random.randint(1, 3)

    print("-="*10)

    if pc == 1:
        print("O computador jogou PEDRA!")
    elif pc == 2:
        print("O computador jogou PAPEL!")
    else:
        print("O computador jogou TESOURA!")

    if jogador == 1:
        print("O jogador jogou PEDRA!")
    elif jogador == 2:
        print("O jogador jogou PAPEL!")
    else:
        print("O jogador jogou TESOURA!")

    print("-="*10, "\n")

    if jogador == pc:
        print("***EMPATE!***")
    elif jogador == 1 and pc == 2:
        print("COMPUTADOR VENCE!")
    elif jogador == 2 and pc == 3:
        print("COMPUTADOR VENCE!")
    elif jogador == 3 and pc == 1:
        print("COMPUTADOR VENCE!")
    else:
        print("JOGADOR VENCE!")
