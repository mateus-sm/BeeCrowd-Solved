a = int(input())
b = int(input())

if a > b:
    fim = a
    inicio = b + 1
else:
    fim = b
    inicio = a + 1

for inicio in range(inicio, fim):
    if (inicio % 5 == 2 or inicio % 5 == 3):
        print(inicio)