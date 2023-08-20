from datetime import date
ano = int(input("Que ano você quer analisar? Coloque 0 para o ano atual: "))
if ano == 0:
    ano = date.today().year
if ano % 4 != 0 or (ano % 100) != (ano % 400) :
    print("O ano {} NÃO é BISSEXTO".format(ano))
else:
    print("O ano {} é BISSEXTO".format(ano))
