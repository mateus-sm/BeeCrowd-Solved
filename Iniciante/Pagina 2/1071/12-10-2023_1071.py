inicio = int(input())
fim = int(input())
somaimpar = 0

if inicio > fim:
    inicio, fim = fim, inicio

for x in range(inicio + 1, fim):
    if x % 2 != 0:
        somaimpar += x

print(somaimpar)