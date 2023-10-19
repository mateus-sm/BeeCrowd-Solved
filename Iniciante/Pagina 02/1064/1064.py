total = 0
positivo = 0

for i in range(6):
    valor = float(input())

    if valor > 0:
        positivo += 1
        total += valor

media = total / positivo

print("%.0lf valores positivos" %positivo)
print("%.1lf" %media)