precoOriginal = float(input("Preço original do produto: R$"))
precoNovo = precoOriginal - precoOriginal * 0.05

print("O produto que custava R${}, na promoção com desconto de 5%, vai custar R${:.2f}.".format(precoOriginal, precoNovo))
