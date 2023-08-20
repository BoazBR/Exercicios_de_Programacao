n1, n2, n3, n4 = map(float, input().split())

n1 = n1 * 2
n2 = n2 * 3
n3 = n3 * 4
media = (n1 + n2 + n3 + n4) / 10

print("Media: {:.1f}".format(media))

if media >= 7:
    print("Aluno aprovado.")

elif media < 5:
    print("Aluno reprovado.")

else:
    print("Aluno em exame.")
    exame = float(input())
    print("Nota do exame: {:.1f}".format(exame))

    mediafinal = (exame + media) / 2

    if mediafinal >= 5:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")

    print("Media final: {:.1f}".format(mediafinal))

