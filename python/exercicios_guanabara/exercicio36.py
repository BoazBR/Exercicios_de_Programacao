casa = float(input("Valor da casa: R$"))
salario = float(input("Salário do comprador: R$"))
anos = int(input("Quantos anos de financiamento? "))
mensalidade = casa / (anos * 12)

print("Para pagar uma casa de R${:.2f} em {} anos a prestação será de R${:.2f}!".format(casa, salario, mensalidade))

if mensalidade > salario * 0.3:
    print("Empréstimo \33[31mNEGADO")
else:
    print("Empréstimo \33[32mCONSEDIDO")