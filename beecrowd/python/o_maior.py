a, b, c = map(int, input().split())

if a > b and a > c:
    print(a, "eh o maior")
elif b > a and b > c:
    print(b, "eh o maior")
else:
    print(c, "eh o maior")