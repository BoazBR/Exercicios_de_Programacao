print("-=" * 14)
print("Analisador de triângulos!")
print("-=" * 14)

primeiro = float(input("Primeiro seguimento: "))
segundo = float(input("Segundo seguimento: "))
terceiro = float(input("Terceiro seguimento: "))

if primeiro < segundo + terceiro and segundo < primeiro + terceiro and terceiro < primeiro + segundo:
    print("Os seguimentos acima PODEM FORMAR um triângulo!")
else:
    print("Os seguimentos acima NÃO PODEM FORMAR um triângulo!")