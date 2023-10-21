soma = 0
a, b = map(int, input().split())

while a > 0 and b > 0:
    if a > b:
        fim = a
        inicio = b
    else:
        fim = b
        inicio = a
    
    for inicio in range(inicio, fim + 1):
        print("%d " %inicio, end='')
        soma += inicio

    print("Sum=%d" %soma)
    soma = 0

    a, b = map(int, input().split())
