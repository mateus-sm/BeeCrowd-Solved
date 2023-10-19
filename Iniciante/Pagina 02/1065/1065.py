pares = 0
i = 0

for i in range(5):
    valor = int(input())

    if valor % 2 == 0:
        pares += 1

print("%d valores pares" %pares)
