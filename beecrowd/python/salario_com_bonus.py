nome = input()
salario = float(input())
vendas = float(input())

comissao = vendas * 0.15

print("TOTAL = R$" , "{:.2f}".format(salario + comissao))