valor = int(input())
cem, cinquenta, vinte, dez, cinco, dois, um = 0, 0, 0, 0, 0, 0, 0

print(valor)
while valor >= 100:
    valor -= 100
    cem += 1
print(cem, "nota(s) de R$ 100,00")

if 100 > valor >= 50:
    valor -= 50
    cinquenta += 1
print(cinquenta, "nota(s) de R$ 50,00")

while 50 > valor >= 20:
    valor -= 20
    vinte += 1
print(vinte, "nota(s) de R$ 20,00")

if 20 > valor >= 10:
    valor -= 10
    dez += 1
print(dez, "nota(s) de R$ 10,00")

if 10 > valor >= 5:
    valor -= 5
    cinco += 1
print(cinco, "nota(s) de R$ 5,00")

while 5 > valor >= 2:
    valor -= 2
    dois += 1
print(dois, "nota(s) de R$ 2,00")

if 2 > valor >= 1:
    valor -= 1
    um += 1
print(um, "nota(s) de R$ 1,00")