print("Gerador de PA")
print("-=" * 10)

contador = 0
num = int(input("Primeiro item: "))
razao = int(input("Razão: "))

while contador != 10:
    print(num, "-> ", end="")
    num += razao
    contador += 1

print("FIM!")
