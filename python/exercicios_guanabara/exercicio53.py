frase = input("Digite uma frase: ").strip().upper().split()
frase = "".join(frase)
avesso = frase[::-1]

print("O inverso de {} é {}!".format(frase, avesso))

if frase == avesso:
    print("Temos uma palíndrome!")
else:
    print("Não é palíndrome!")