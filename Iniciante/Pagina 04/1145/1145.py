sizelinha, total = map(int, input().split())
i = 0
j = 0
cont = 1
numlinha = total // sizelinha

for i in range(numlinha):
    for j in range(sizelinha):
        if j == sizelinha - 1:
            print(cont)
            cont += 1
        else:
            print(cont, end=' ')
            cont += 1
 