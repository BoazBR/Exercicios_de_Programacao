print("-*" * 5, "Lojinha do piru", "*-" * 5)
preco = float(input("Total em compras: R$"))

print('''Escolha a forma de pagamento:
[ 1 ] À vista, dinheiro/cheque
[ 2 ] À vista no cartão
[ 3 ] Em até 2X no cartão
[ 4 ] 3X ou mais no cartão''')
escolha = int(input("Opção de pagamento: "))

if escolha == 1:
    print("Sua compra de R${:.2f} vai custar R${:.2f} no final.".format(preco, preco - preco * 0.1))
elif escolha == 2:
    print("Sua compra de R${:.2f} vai custar R${:.2f} no final.".format(preco, preco - preco * 0.05))
elif escolha == 3:
    print("Sua compra de R${:.2f} será dividida em 2 parcelas de {:.2f} cada.".format(preco, preco / 2))
elif escolha == 4:
    parcelas = int(input("Deseja dividir em quantas parcelas? "))
    total = preco + preco * 0.2
    print("Sua compra de R${:.2f} será dividida em {} parcelas de R${:.2f} cada. Devido aos juros o total de sua compra é de R${:.2f}".format(preco, parcelas, (preco + preco * 0.2) / parcelas, (preco + preco * 0.2)))
else:
    print("\33[31mOPÇÃO INVALIDA!\33[m Tente novamente")
