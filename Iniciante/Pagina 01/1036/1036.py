import math

float_str = input()
a, b, c = float_str.split()

a = float(a)
b = float(b)
c = float(c)

delta = b * b - (4 * a * c)

if delta > 0 and a != 0:
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    print("R1 = %.5f" %x1)
    print("R2 = %.5f" %x2)
else:
    print("Impossivel calcular")
