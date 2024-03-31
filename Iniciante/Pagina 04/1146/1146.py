while True:
    try:
        num = int(input())
        if (num != 0):
            numeros = []
            for i in range(1, num + 1):
                numeros.append(str(i))

            print(' '.join(numeros))
        else:
            break

    except EOFError:
        break