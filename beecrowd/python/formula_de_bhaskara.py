a, b, c = map(float, input().split())

if a <= 0 or b <= 0 or c <= 0:
    print("Impossivel calcular")

else:
    delta = (b ** 2) - (4 * a * c)

    if delta <= 0:
        print("Impossivel calcular")

    else:
        r1 = (-b + delta ** 0.5) / (2 * a)
        r2 = (-b - delta ** 0.5) / (2 * a)

        print("R1 = {:.5f}".format(r1))
        print("R2 = {:.5f}".format(r2))
