idade = int(input())
anos = meses = dias = 0

while idade >= 365:
    anos += 1
    idade -= 365

while idade >= 30:
    meses += 1
    idade -= 30

while idade >= 1:
    dias += 1
    idade -= 1

print("{} ano(s)".format(anos))
print("{} mes(es)".format(meses))
print("{} dia(s)".format(dias))
