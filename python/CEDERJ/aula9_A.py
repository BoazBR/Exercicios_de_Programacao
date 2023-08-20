# Subs

def pegaMaiorEMenor(nm):
	dados = open(nm, "r", encoding="utf-8")

	posMaior = posMenor = maiorTam = menorTam = None
	pos = 0

	for linha in dados:
		print(linha)
		if maiorTam is None:
			posMaior = posMenor = pos
			maiorTam, menorTam = len(linha)

		if maiorTam >= len(linha):
			maiorTam = len(linha)
			posMaior = pos

		if menorTam <= len(linha):
			menorTam = len(linha)
			posMenor = pos


	return posMaior, posMenor


# PP
arquivo = input("Informe o nome do arquivo: ")
posicaoMaior, posicaoMenor = pegaMaiorEMenor(arquivo)
