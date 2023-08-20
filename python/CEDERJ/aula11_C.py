# Subs


def criaDicionario(texto):
    dicionario = dict()

    for caracter in texto:
        if caracter not in dicionario:
            dicionario[caracter] = 1

        else:
            dicionario[caracter] += 1

    return dicionario


def mostraDicionario(dicionario):
    for pessoa in dicionario:
        print(pessoa, "-", dicionario[pessoa])
    return None




# PP


entrada = input("Informe um texto: ").lower().strip()
entrada = entrada.replace(" ", "")
dicionario = criaDicionario(entrada)
print(sorted(dicionario.items()))

# Entrada: Três pratos de trigo para três tigres tristes

