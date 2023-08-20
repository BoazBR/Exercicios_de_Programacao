from random import randint
pc = randint(0, 10)
tentativas = 1

jogador = int(input("""Sou seu computador!
Acabei de pensar em um número entre 0 e 10.
Será que você consegue advimhar qual foi?
Qual o seu palpite? """))

while jogador != pc:
    tentativas += 1
    if jogador < pc:
        print("Mais... Tente mais um vez!")
    else:
        print("Menos... Tente mais uma vez!")

    jogador = int(input("Qual o seu palpite?"))

print("Acertou com {} tentativas. Parabéns!".format(tentativas))