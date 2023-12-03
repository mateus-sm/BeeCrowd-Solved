dias, valorInicial = map(int, input().split())
movimentacao = []

for i in range(dias):
    movimentacao.append(int(input()))

j = 0
valorFinal = valorInicial
for i in range(dias):
    valorInicial += movimentacao[j]

    if (valorInicial < valorFinal):
        valorFinal = valorInicial
    
    j += 1

print(valorFinal)