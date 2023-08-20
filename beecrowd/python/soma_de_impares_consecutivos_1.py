total = 0
x = int(input())
y = int(input())

if x > y:
    for vals in range(y + 1, x):
        if vals % 2 != 0:
            total += vals

else:
    for vals in range(x + 1, y):
        if vals % 2 != 0:
            total += vals

print(total)
