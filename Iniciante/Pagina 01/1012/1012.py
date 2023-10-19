a, b, c = map(float, input().split())
pi = 3.14159

triangulo = (a * c) / 2
circulo = pi * (c * c)
trapezio = ((a + b) * c) / 2
quadrado =  b * b
retangulo = a * b

print("TRIANGULO: %.3lf" %triangulo)
print("CIRCULO: %.3lf" %circulo)
print("TRAPEZIO: %.3lf" %trapezio)
print("QUADRADO: %.3lf" %quadrado)
print("RETANGULO: %.3lf" %retangulo)
