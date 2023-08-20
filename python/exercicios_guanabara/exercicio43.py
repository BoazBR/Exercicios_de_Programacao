peso = float(input("Informe seu peso (kg): "))
altura = float(input("Informe sua altura (m): "))
imc = peso / (altura * altura)

print("Seu IMC é {:.1f}!".format(imc))

if imc < 18.5:
    print("Você está \33[31mABAIXO DO PESO\33[m!")
elif imc < 25:
    print("Você está no \33[32mPESO IDEAL\33[m!")
elif imc < 30:
    print("Você está em \33[31mSOBREPESO\33[m!")
elif imc < 40:
    print("Você está em \33[31mOBESIDADE\33[m!")
else:
    print("Você está em \33[31mOBESIDADE MÓRBIDA\33[m!!! Cuidado!")