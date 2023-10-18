valor = int(input())

print("%d" %valor)

N100 = valor // 100
print("%d nota(s) de R$ 100,00" %N100)
a100 = N100 * 100
valor -= a100
N50 = valor // 50
print("%d nota(s) de R$ 50,00" %N50)
a50 = N50 * 50
valor -= a50
N20 = valor // 20
print("%d nota(s) de R$ 20,00" %N20)
a20 = N20 * 20
valor -= a20
N10 = valor // 10
print("%d nota(s) de R$ 10,00" %N10)
a10 = N10 * 10
valor -= a10
N5 = valor // 5
print("%d nota(s) de R$ 5,00" %N5)
a5 = N5 * 5
valor -= a5
N2 = valor // 2
print("%d nota(s) de R$ 2,00" %N2)
a2 = N2 * 2
valor -= a2
N1 = valor // 1
print("%d nota(s) de R$ 1,00" %N1)
