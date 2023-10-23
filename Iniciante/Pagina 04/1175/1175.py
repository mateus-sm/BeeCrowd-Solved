max = 20
i = 0
j = max - 1
vet = [int(input()) for i in range(max)]

for x in range(max // 2):
    vet[i], vet[j] = vet[j], vet[i]
    i += 1
    j -= 1

for i in range(max):
    print("N[%d] = %d" %(i, vet[i]))
