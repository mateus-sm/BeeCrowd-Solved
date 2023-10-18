i = 1
j = 7
x = 0
flagj = 1
flagi = 1

for x in range(15):
    print("I=%d J=%d" %(i, j))

    if flagj == 1:
        j = j - 1
        flagj = 2
    elif flagj == 2:
        j = j - 1
        flagj = 3
    elif flagj == 3:
        j = j + 4
        flagj = 1     

    if flagi == 1:
        i = i
        flagi = 2
    elif flagi == 2:
        i = i
        flagi = 3
    elif flagi == 3:
        i = i + 2
        flagi = 1

    x += 1
