i = 0
coelhos = 0
ratos = 0
sapos = 0
total = 0

contador = int(input())

for i in range(contador):
    quantia,tipo=input().split()
    quantia = int(quantia)

    total += quantia

    if tipo == 'C':
        coelhos += quantia
    if tipo == 'R':
        ratos += quantia
    if tipo == 'S':
        sapos += quantia
    

print("Total: %d cobaias" %total)
print("Total de coelhos: %d" %coelhos)
print("Total de ratos: %d" %ratos)
print("Total de sapos: %d" %sapos)
    
percentualcoelho = (coelhos * 100.00) / total
print("Percentual de coelhos: %.2lf %%" %percentualcoelho)
percentualrato = (ratos * 100.00) / total
print("Percentual de ratos: %.2lf %%" %percentualrato)
percentualsapo = (sapos * 100.00) / total
print("Percentual de sapos: %.2lf %%" %percentualsapo)
