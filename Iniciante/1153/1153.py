num = int(input())
i = 1
total = 0
aux = 0

if num >= 2:
    size = num 
    for i in range(1, size):
        aux = num
        #print(i)
        if i == 1:
            total += aux
            total = total * (aux - i)
        else:
            total = total * (aux - i)

else:
    total = 1

print(total)