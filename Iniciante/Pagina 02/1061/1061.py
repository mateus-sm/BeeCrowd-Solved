entrada = input().split()
di = int(entrada[1])

entrada = input().split()
hi = int(entrada[0])
mi = int(entrada[2])
si = int(entrada[4])

entrada = input().split()
df = int(entrada[1])

entrada = input().split()
hf = int(entrada[0])
mf = int(entrada[2])
sf = int(entrada[4])

totalinicial = di * 86400 + hi * 3600 + mi * 60 + si
totalfinal = df * 86400 + hf * 3600 + mf * 60 + sf

total = totalfinal - totalinicial

dias = total // 86400
total -= dias * 86400
horas = total // 3600
total -= horas * 3600
minutos = total // 60
total -= minutos * 60

print("%d dia(s)" %dias)
print("%d hora(s)" %horas)
print("%d minuto(s)" %minutos)
print("%d segundo(s)" %total)
