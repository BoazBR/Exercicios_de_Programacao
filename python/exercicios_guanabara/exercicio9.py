num = int(input("Digite um número para ver sua tabuada: "))
print("--------------")
for i in range(1,11):
    print(f'"{num} * {i:2} = {num * i}"')
print("--------------")