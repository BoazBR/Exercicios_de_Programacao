primeiro = int(input("Primeiro valor: "))
segundo = int(input("Segundo valor: "))
terceiro = int(input("Terceiro valor: "))
maior = menor = primeiro

if segundo > maior:
    maior = segundo
if terceiro > maior:
    maior = terceiro

if segundo < menor:
    menor = segundo
if terceiro < menor:
    menor = terceiro

print("O menor valor digitado foi", menor)
print("O maior valor digitado foi", maior)