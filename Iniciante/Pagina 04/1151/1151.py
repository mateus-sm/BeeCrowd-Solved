n = int(input())

arr = list()

arr.append(0)
arr.append(1)

for i in range(2, n):
    arr.append(arr[i-1] + arr[i - 2])

for i in range(len(arr)):
    if (i == (n - 1)):
        print(arr[i])
    
    else:
        print(arr[i], end=" ")

#num = int(input())
#vet = [0, 1, 1]
#
#if num == 0:
#    print(vet[0])
#elif num == 1:
#    print(vet[0])
#elif num == 2:
#    print(vet[0], vet[1])
#lif num >= 3:
#    print(vet[0], vet[1], vet[2], end='')    
#    for i in range(3, num):
#        vet.append((vet[i - 1] + vet[i - 2]))
#        print(" %d" %vet[i], end='')
