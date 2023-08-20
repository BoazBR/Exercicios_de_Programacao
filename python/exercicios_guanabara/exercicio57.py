sexo = input("Informe o seu sexo [M/F]: ").upper().strip()

while sexo != "M" and sexo != "F":
    sexo = input("Dados inválidos! Por favor, informe seu sexo [M,F]: ").upper().strip()

print("Sexo {} registrado com sucesso!".format(sexo))
