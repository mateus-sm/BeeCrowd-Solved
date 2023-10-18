k = int(input())
flagA = 1
flagB = 0
flagC = 0
j = k * 2
i = 0
a = 1
b = 0
c = 0

for i in range(i, j):
    if flagA == 0:
        a = a + 1
        flagA = 2     
    elif flagA == 1:
        a = a
        flagA = 2   
    elif flagA == 2:
        a = a
        flagA = 0        

    if flagB == 0:
        b = a * a
        flagB = 1        
    elif flagB == 1:
        b = (a * a) + 1
        flagB = 0       

    if flagC == 0:
        c = a * b
        flagC = 1       
    elif flagC == 1:
        c = c + 1
        flagC = 0
                     
    print(a, b, c)
