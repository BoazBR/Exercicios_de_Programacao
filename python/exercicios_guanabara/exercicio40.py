nota1 = float(input("Primeira prova: "))
nota2 = float(input("Segunda prova: "))
media = (nota1 + nota2) / 2

print("Tirando {:.1f} e {:.1f} a média do aluno é {:.1f}!".format(nota1, nota2, media))
if media >= 7:
    print("Aluno \33[32mAPROVADO!")
elif media < 5:
    print("Aluno \33[31mREPROVADO!")
elif 7 > media >= 5:
    print("Aluno de RECUPERAÇÃO!")