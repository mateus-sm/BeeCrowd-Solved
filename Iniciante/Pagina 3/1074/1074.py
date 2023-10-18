casos = int(input())
i = 0

while i < casos:
    valor = int(input())

    if valor == 0:
        print("NULL")
    else:
        if valor > 0 and valor % 2 == 0:
            print("EVEN POSITIVE")
        if valor < 0 and valor % 2 == 0:
            print("EVEN NEGATIVE")
        if valor > 0 and valor % 2 != 0:
            print("ODD POSITIVE")
        if valor < 0 and valor % 2 != 0:
            print("ODD NEGATIVE")
    
    i += 1;