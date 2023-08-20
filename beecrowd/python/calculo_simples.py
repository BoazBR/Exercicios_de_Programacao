peca1, qtdPeca1, valorPeca1 = map(float , input().split())
peca2, qtdPeca2, valorPeca2 = map(float , input().split())

total = (qtdPeca1 * valorPeca1) + (qtdPeca2 * valorPeca2)

print("VALOR A PAGAR: R$" , "{:.2f}".format(total))