nome = input("Digite seu nome completo: ").strip()
print("Analisando nome...")
print("Seu nome em maiúsculas é {}.".format(nome.upper()))
print("Seu nome em maiúsculas é {}.".format(nome.lower()))
print("Seu nome tem ao todo {} letras.".format(len(nome) - nome.count(" ")))
nome = nome.split()
print("Apenas seu primeiro nome é {} e ele tem {} letras.".format(nome[0], len(nome[0])))