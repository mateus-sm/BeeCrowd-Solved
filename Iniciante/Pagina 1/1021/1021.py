valor = float(input())
valor += 0.001

print("NOTAS:")
N100 = valor // 100
print("%d nota(s) de R$ 100.00" %N100)
valor -= N100 * 100

N50 = valor // 50
print("%d nota(s) de R$ 50.00" %N50)
valor -= N50 * 50

N20 = valor // 20
print("%d nota(s) de R$ 20.00" %N20)
valor -= N20 * 20

N10 = valor // 10
print("%d nota(s) de R$ 10.00" %N10)
valor -= N10 * 10

N5 = valor // 5
print("%d nota(s) de R$ 5.00" %N5)
valor -= N5 * 5

N2 = valor // 2
print("%d nota(s) de R$ 2.00" %N2)
valor -= N2 * 2

print("MOEDAS:")
M1 = valor // 1
print("%d moeda(s) de R$ 1.00" %M1)
valor -= M1 * 1

M50 = valor // 0.5
print("%d moeda(s) de R$ 0.50" %M50)
valor -= M50 * 0.5

M25 = valor // 0.25
print("%d moeda(s) de R$ 0.25" %M25)
valor -= M25 * 0.25

M10 = valor // 0.10
print("%d moeda(s) de R$ 0.10" %M10)
valor -= M10 * 0.10

M5 = valor // 0.05
print("%d moeda(s) de R$ 0.05" %M5)
valor -= M5 * 0.05

M01 = valor // 0.01
print("%d moeda(s) de R$ 0.01" %M01)

