totalnum = total = 0

for c in range(3, 501, 6):
    totalnum += 1
    total += c

print("A soma de todos os {} valores solicitados é {}!".format(totalnum, total))