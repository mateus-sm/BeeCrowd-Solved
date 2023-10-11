valor = float(input())

if valor > 0 and valor <= 2000:
    print("Isento")
elif valor >= 2000.01 and valor <= 3000:
    valor = valor - 2000
    valor = valor * 0.08
    print("R$ %.2f" %valor)
elif valor >= 3000.01 and valor <= 4500:
    valor = valor - 3000
    valor = valor * 0.18 + 80
    print("R$ %.2f" %valor)
elif valor > 4500:
    valor = valor - 4500
    valor = valor * 0.28 + 80 + 270
    print("R$ %.2f" %valor)
