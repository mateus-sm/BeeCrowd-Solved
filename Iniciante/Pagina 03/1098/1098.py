i = 0
j = 1
for i in range(i, 12, 2):

    #repetiçoes de 3
    for j in range(1, 4):
        #tres primeiras linhas
        if i == 0:
            print("I=%d J=%d" %(0, j))
        else:
            #tres ultimas linhas
            if i == 10:
                print("I=%d J=%d" %(1, j + 1))
            else:
                #linhas do meio
                print("I=%d.%d J=%d.%d" %(0, i % 10, j, i % 10))
    
i = 0
j = 2
for i in range(i, 11, 2):

    #repetiçoes de 3
    for j in range(2, 5):
        #tres primeiras linhas
        if i == 0:
            continue
        else:
            #tres ultimas linhas
            if i == 10:
                print("I=%d J=%d" %(2, j + 1))
            else:
                #linhas do meio
                print("I=%d.%d J=%d.%d" %(1, i % 10, j, i % 10))

