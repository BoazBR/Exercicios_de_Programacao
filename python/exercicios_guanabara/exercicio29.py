velocidade = int(input("Qual a velocidade atual do seu carro? "))

if velocidade > 80:
    print("MULTADO! Você excedeu o limite permitido que é de 80km/h!")
    print("Você deve pagar uma multa de R${}.00!".format((velocidade - 80) * 7))

print("Dirija com segurança e tenha um bom dia!")