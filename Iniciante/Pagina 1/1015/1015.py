import math

float_str = input()
x1, y1 = float_str.split()
x1 = float(x1)
y1 = float(y1)

float_str = input()
x2, y2= float_str.split()
x2 = float(x2)
y2 = float(y2)

distancia = math.sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)))

print("%.4f" %distancia)
