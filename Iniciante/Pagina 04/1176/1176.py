fib = []
fib.append(0)
fib.append(1)
max = 60

for i in range(2,61):
    fib.append(fib[i - 1] + fib [i - 2])

casos = int(input())

for i in range(casos):
    num = int(input())

    print(f"Fib({num}) = {fib[num]}")