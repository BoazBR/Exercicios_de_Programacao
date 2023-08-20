km = int(input("KM rodados: "))
dias = int(input("Dias alugados: "))
total = (km * 0.15) + (dias * 60)

print("O total a pagar é R${:.2f}.".format(total))