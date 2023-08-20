num = int(input("Digite um número: "))
resultado = num

print("Calculando {}! = {} X".format(num, num), end=" ")

for num in range(num - 1, 0, -1):
    resultado *= num
    print(num, end=" ")

    if num == 1:
        print("=", resultado)

    else:
        print("X", end=" ")
