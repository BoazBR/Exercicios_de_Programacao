from random import shuffle
n1 = input("Primeiro aluno: ")
n2 = input("Segundo aluno: ")
n3 = input("Terceiro aluno: ")
n4 = input("Quarto aluno: ")
nomes = [n1, n2, n3, n4]
shuffle(nomes)

print("A ordem de apresentação será:")
print(nomes)