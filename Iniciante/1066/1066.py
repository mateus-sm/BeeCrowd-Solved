pares = 0
impares = 0
positivos = 0
negativos = 0

for i in range(6):
    valor = int(input())

    if valor % 2 == 0:
        pares += 1
    else:
        impares += 1

    if valor >= 0:
        positivos += 1
    else:
        negativos += 1

    print("%d valor(es) par(es)" %pares)
    print("%d valor(es) impar(es)" %impares)
    print("%d valor(es) positivo(s)" %positivos)
    print("%d valor(es) negativo(s)" %negativos)
