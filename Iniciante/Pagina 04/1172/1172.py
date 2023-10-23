x = []

for i in range(11):
    x.append(int(input()))

    if x[i] <= 0:
        x[i] = 1
    
    print("X[%d] = %d" %(i, x[i]))

#x = []
#
#for i in range(11):
#    x[i] = input()
#
#    if x[i] <= 0:
#        x[i] = 1
#    
#    print("X[%d] = %d" %(i, x[i]))