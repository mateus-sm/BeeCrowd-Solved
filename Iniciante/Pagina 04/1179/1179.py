cont = contpar = contimpar = 0
vetpar = []
vetimpar = []

while cont < 15:
    entrada = int(input())

    if entrada % 2 == 0:
        vetpar.append(entrada)
        contpar += 1
        cont += 1
    else:
        vetimpar.append(entrada)
        contimpar += 1
        cont += 1
    
    if (contimpar == 5):
        for i in range(contimpar):
            print(f"impar[{i}] = {vetimpar[i]}")
        
        contimpar = 0
        vetimpar.clear()

    if (contpar == 5):
        for i in range(contpar):
            print(f"par[{i}] = {vetpar[i]}")
        
        contpar = 0
        vetpar.clear()

for i in range(contimpar):
    print(f"impar[{i}] = {vetimpar[i]}")
for i in range(contpar):
    print(f"par[{i}] = {vetpar[i]}")

