tempo = int(input())

horas = ((tempo // 60) // 60)
auxiliar1 = ((horas * 60) * 60)

minutos = ((tempo - auxiliar1) // 60)
auxiliar2 = minutos * 60

segundos = tempo - auxiliar1 - auxiliar2

print("%d:%d:%d" %(horas, minutos, segundos))
