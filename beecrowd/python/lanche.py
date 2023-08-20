cod, qtd = map(int, input().split())

if cod == 1:
    total = qtd * 4

elif cod == 2:
    total = qtd * 4.5

elif cod == 3:
    total = qtd * 5

elif cod == 4:
    total = qtd * 2

else:
    total = qtd * 1.5

print("Total: R$ {:.2f}".format(total))
