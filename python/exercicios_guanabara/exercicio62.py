print("Gerador de PA")
print("-=" * 10)

limite = 10
contador = acumulador = 0
num = int(input("Primeiro item: "))
razao = int(input("Razão: "))

while limite != 0:
    while contador != limite:
        print(num, "-> ", end="")
        num += razao
        contador += 1
        acumulador += 1

    print("PAUSA")
    limite = int(input("Quer mostrar mais quantos termos? "))
    contador = 0

print("Progressão realizada com {} termos mostrados.".format(acumulador))
