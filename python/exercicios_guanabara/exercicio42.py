lado1 = float(input("Primeiro seguimento: "))
lado2 = float(input("Segundo seguimento: "))
lado3 = float(input("Terceiro seguimento: "))

if lado1 < lado2 + lado3 and lado2 < lado1 + lado3 and lado3 < lado1 + lado2:
    if lado1 == lado2 == lado3:
        tipo = "\33[32mEQUILÁTERO\33[m"
    elif lado1 == lado2 or lado1 == lado3 or lado2 == lado3:
        tipo = "\33[32mISÓSCELES\33[m"
    else:
        tipo = "\33[32mESCALENO\33[m"

    print("Os seguimentos acima \33[32mPODEM\33[m formar um triângulo {}!".format(tipo))
else:
    print("Os seguimentos acima \33[31mNÃO PODEM\33[m formar triângulo!")