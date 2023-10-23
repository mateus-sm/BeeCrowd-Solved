num = int(input())
vet = [0, 1, 1]

if num == 0:
    print("0")
elif num == 1:
    print(vet[0])
elif num == 2:
    print(vet[0], vet[1], end='')
elif num >= 3:
    print(vet[0], vet[1], vet[2], end='')    
    for i in range(3, num):
        #x = (vet[i - 1] + vet[i - 2])
        vet.append((vet[i - 1] + vet[i - 2]))
        print(" %d" %vet[i], end='')

print("\n")

