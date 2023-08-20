salario = float(input("Qual o salário do funcionário? R$"))
print("O funcionário que ganhava R${:.2f}, com o aumento de 15%, ganhará R${:.2f}.".format(salario, salario + (salario * 0.15)))
