flag = 1
pos = 0

for i in range(100):
    num = int(input())

    if flag == 1:
        maior = num
        flag = 0
    else:
        if num > maior:
            maior = num
            pos = i + 1

print(maior)
print(pos)