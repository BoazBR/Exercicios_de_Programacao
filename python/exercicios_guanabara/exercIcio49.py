num = int(input("Digite um número para ver sua tabuada:"))
result = 0
for i in range(1, 11):
    result += num
    print("{} x {} = {}".format(num, i, result))
