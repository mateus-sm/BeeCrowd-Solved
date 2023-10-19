base = 0

salario = float(input())

if salario > 0 and salario <= 400.00:
    base = salario * 0.15
    salario += base
    print("Novo salario: %.2f" %salario)
    print("Reajuste ganho: %.2f" %base)
    print("Em percentual: 15 %%")
elif salario >= 400.01 and salario <= 500.00:
    base = salario * 0.12
    salario += base
    print("Novo salario: %.2f" %salario)
    print("Reajuste ganho: %.2f" %base)
    print("Em percentual: 12 %%")
elif salario >= 800.01 and salario <= 1200.00:
    base = salario * 0.10
    salario += base    
    print("Novo salario: %.2f" %salario)
    print("Reajuste ganho: %.2f" %base)
    print("Em percentual: 10 %%")
elif salario >= 1200.01 and salario <= 2000.00:
    base = salario * 0.7
    salario += base    
    print("Novo salario: %.2f" %salario)
    print("Reajuste ganho: %.2f" %base)
    print("Em percentual: 7 %%")
elif salario > 2000.00:
    base = salario * 0.04
    salario += base    
    print("Novo salario: %.2f" %salario)
    print("Reajuste ganho: %.2f" %base)
    print("Em percentual: 4 %%")   
