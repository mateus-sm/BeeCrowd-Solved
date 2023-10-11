ved = int(input())

ano = ved / 365;
mes = (ved % 365) / 30
dia = (ved % 365) % 30
print("%d ano(s)" %ano)
print("%d mes(es)" %mes)
print("%d dia(s)" %dia)
