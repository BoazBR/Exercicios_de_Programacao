dis = int(input("Qual a distância de sua viagem em km? "))
print("Você está prestes a começar uma viagem de {}km.".format(dis))

if dis >= 200:
    print("E o preço de sua passagem é R${:.2f}!".format(dis * 0.45))
else:
    print("E o preço de sua passagem é R${:.2f}!".format(dis * 0.50))