num = int(input())
tamanho = num

if tamanho % 2 == 0:
    print(f"{pow(tamanho, 2) // 2} casas brancas e {pow(tamanho, 2) // 2} casas pretas")
else:
    print(f"{(pow(tamanho, 2) + 1) // 2} casas brancas e {(pow(tamanho, 2) - 1) // 2} casas pretas")