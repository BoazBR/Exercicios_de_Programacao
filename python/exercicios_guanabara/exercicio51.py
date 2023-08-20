print("=" * 30)
print("     10 TERMOS DE UMA PA")
print("=" * 30)

num = int(input("Primeiro termo: "))
raz = int(input("Razão: "))

for i in range(0, 10):
    print(num, end=" -> ")
    num += raz

print("ACABOU")
