valor = int(input())
contador = 0

while contador < 6:
    if valor % 2 != 0:
        print("%d" %valor)
        contador += 1
    valor += 1