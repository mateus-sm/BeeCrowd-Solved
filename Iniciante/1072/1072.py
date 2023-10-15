casos = int(input())
i = 0
pertence = 0

while i < casos:
    teste = int(input())

    for x in range(10, 20):
        if x == teste:
            pertence += 1

    i += 1

print("%d in" %pertence)
print("%d out" %abs(casos - pertence))
