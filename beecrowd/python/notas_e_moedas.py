valor = float(input())

n100 = n50 = n20 = n10 = n5 = n2 = m100 = m50 = m25 = m10 = m5 = m1 = 0

#Notas

n100 = int(valor // 100)
valor = valor % 100

n50 = int(valor // 50)
valor = valor % 50

n20 = int(valor // 20)
valor = valor % 20

n10 = int(valor // 10)
valor = valor % 10

n5 = int(valor // 5)
valor = valor % 5

n2 = int(valor // 2)
valor = valor % 2

#Moedas

m100 = int(valor // 1)
valor = valor % 1

m50 = int(valor // 0.5)
valor = valor % 0.5

m25 = int(valor // 0.25)
valor = valor % 0.25

m10 = int(valor // 0.1)
valor = valor % 0.1

m5 = int(valor // 0.05)
valor = valor % 0.05

m1 = int(valor // 0.01)
valor = valor % 0.01


print("""NOTAS:
{} nota(s) de R$ 100.00
{} nota(s) de R$ 50.00
{} nota(s) de R$ 20.00
{} nota(s) de R$ 10.00
{} nota(s) de R$ 5.00
{} nota(s) de R$ 2.00
MOEDAS:
{} moeda(s) de R$ 1.00
{} moeda(s) de R$ 0.50
{} moeda(s) de R$ 0.25
{} moeda(s) de R$ 0.10
{} moeda(s) de R$ 0.05
{} moeda(s) de R$ 0.01""".format(n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m5, m1 ))
