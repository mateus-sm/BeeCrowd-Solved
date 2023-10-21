i = 1
j = 7
x = 0
flagi = 1
flagj = 1

while x <= 14:
    print("I=%d J=%d" %(i, j))
    if flagj == 1:
        j = 6
        flagj = 2
    elif flagj == 2:
        j = 5
        flagj = 3
    elif flagj == 3:
        j = 7
        flagj = 1
    
    if flagi == 1:
        flagi = 2
    elif flagi == 2:
        flagi = 3
    elif flagi == 3:
        i += 2
        flagi = 1  
    
    x += 1
