hi, mi, hf, mf = input().split()
hi = int(hi)
hf = int(hf)
mi = int(mi)
mf = int(mf)

#calcular horas
if hf > hi:
    ht = hf - hi
elif hf < hi:
    ht = 24 + (hf - hi)
elif hf == hi:
    #horas iguais
    ht = 24
    
    if mf - mi > 0:
        ht = 0

#calcular minutos
if mf > mi:
    mt = mf - mi
elif mf < mi:
    #quando o minuto inicial é maior que o final os minutos implicam uma hora a menos
    mt = 60 + (mf - mi)
    if ht > 0:
        ht -= 1
elif mf == mi:
    mt = 0
    
    

print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(ht, mt))