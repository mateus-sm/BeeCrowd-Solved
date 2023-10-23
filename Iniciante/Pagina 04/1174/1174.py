vet = [float(input()) for i in range(100)]

for i in range(100):
    if vet[i] <= 10:
        print("A[%d] = %.1lf" %(i, vet[i]))
