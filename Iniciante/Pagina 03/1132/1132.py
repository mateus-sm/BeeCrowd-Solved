total = 0
a = int(input())
b = int(input())

if a > b:
    fim = a + 1
    inicio = b
else:
    fim = b + 1
    inicio = a

for inicio in range(inicio, fim):
    if (inicio % 13 != 0):
        total += inicio

print(total)
