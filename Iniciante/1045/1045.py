a, b, c = input().split()
a = float(a)
b = float(b)
c = float(c)


if b > a and b > c:
    #maior = b  
    a, b = b, a
if c > a and c > b:
    #maior = c
    a, c = c, a

if a >= b + c:
    print("NAO FORMA TRIANGULO")
else:
    if ((a * a) == (b * b + c * c)):
        print("TRIANGULO RETANGULO")
    if ((a * a) > (b * b + c * c)):
        print("TRIANGULO OBTUSANGULO")
    if ((a * a) < (b * b + c * c)):
        print("TRIANGULO ACUTANGULO")
    if (a == b and a == c):
        print("TRIANGULO EQUILATERO")
    if ((a == b and a != c and b != c) or (a == c and a != b and c != b) or (b == c and b != a and c != a)):
        print("TRIANGULO ISOSCELES")