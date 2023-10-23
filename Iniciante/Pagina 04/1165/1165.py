contador = 0

casos = int(input())

numero = [int(input()) for i in range(casos)]

for j in range(casos):
    for k in range(2,numero[j]):
        if numero[j] % k == 0:
            contador += 1

    if contador >= 1:
        print(numero[j], "nao eh primo")
    else:
        print(numero[j], "eh primo")

    contador = 0

#contador = 0
#numero = []
#
#casos = int(input())
#
#for i in range(casos):
#    numero.append(int(input()))
#
#for j in range(casos):
#    for k in range(2,numero[j]):
#        if numero[j] % k == 0:
#            contador += 1
#
#    if contador >= 1:
#        print(numero[j], "nao eh primo")
#    else:
#        print(numero[j], "eh primo")
#
#    contador = 0