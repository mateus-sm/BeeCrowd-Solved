contador = 0
casos = int(input())

for i in range(casos):
    a, b = map(int, input().split())

    if a > b:
        fim = a
        inicio = b + 1
    else:
        fim = b
        inicio = a + 1
    
    for inicio in range(inicio, fim):
        if (inicio % 2 != 0):
            contador += inicio

    print(contador)
    contador = 0