largura = float(input("Largura da parede: "))
altura = float(input("Altura da parede: "))
parede = largura * altura

print("Sua parede tem a dimensão de {}x{} e sua área é de {}m².".format(largura, altura, parede))
print("Para pintar essa parede você precisará de {}l tinta.".format(parede/2))