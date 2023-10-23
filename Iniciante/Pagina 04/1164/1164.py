k = 0
soma = 0
casos = int(input())

vet = [int(input()) for i in range(casos)]

for i in range(casos):
    for j in range(1,vet[k]):
        if vet[k] % j == 0:
            soma += j
    
    if soma == vet[i]:
        print(vet[i], "eh perfeito")
    else:
        print(vet[i], "nao eh perfeito")
    
    soma = 0
    k += 1