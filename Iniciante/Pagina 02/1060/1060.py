n1, n2, n3, n4, n5, n6 = input().split()
n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
n4 = float(n4)
n5 = float(n5)
n6 = float(n6)
numbers = [n1, n2, n3, n4, n5, n6]
contador = 0

for x in range(6):
    if numbers[x] > 0:
        contador += 1

print("%d valores positivos\n" %contador)
