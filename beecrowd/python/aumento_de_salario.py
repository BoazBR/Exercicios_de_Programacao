salario = float(input())

if salario <= 400:
    percentual = 15
    reajuste = salario * 0.15
    salarionovo = salario + reajuste

elif salario <= 800:
    percentual = 12
    reajuste = salario * 0.12
    salarionovo = salario + reajuste

elif salario <= 1200:
    percentual = 10
    reajuste = salario * 0.1
    salarionovo = salario + reajuste

elif salario <= 2000:
    percentual = 7
    reajuste = salario * 0.07
    salarionovo = salario + reajuste

else:
    percentual = 4
    reajuste = salario * 0.04
    salarionovo = salario + reajuste

print("Novo salario: {:.2f}".format(salarionovo))
print("Reajuste ganho: {:.2f}".format(reajuste))
print("Em percentual: {} %".format(percentual))
