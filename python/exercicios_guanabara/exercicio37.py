decimal = int(input("Informe um número inteiro: "))
print('''Escolha uma das bases para conversão:
[ 1 ] Converter para BINÁRIO
[ 2 ] Converter para OCTAL
[ 3 ] Converter para HEXADECIMAL''')
opcao = int(input("Sua opção: "))

if opcao == 1:
    print("{} convertido para BINÁRIO é igual a {}".format(decimal, bin(decimal)[2:]))
elif opcao == 2:
    print("{} convertido para OCTAL é igual a {}".format(decimal, oct(decimal)[2:]))
elif opcao == 3:
    print("{} convertido para HEXADECIMAL é igual a {}".format(decimal, hex(decimal)[2:]))
else:
    print("\33[1;31mOPÇÃO INVALIDA! \33[mTente novamente.")