numero = int(input())
media = 0
contador = 0

while numero >= 0:
    contador += 1
    media += numero
    numero = int(input())

media = media / contador

print("%d" %media)
