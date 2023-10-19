n1 = float(input())
n2 = float(input())
n3 = float(input())
n4 = float(input())
n5 = float(input())
n6 = float(input())
numbers = [n1, n2, n3, n4, n5, n6]
contador = 0

for x in range(6):
    if numbers[x] > 0:
        contador += 1

print("%d valores positivos" %contador)
