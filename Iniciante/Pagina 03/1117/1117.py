i = 0
total = 0

while i < 2:
    nota = float(input())

    if nota < 0 or nota > 10:
        print("nota invalida")
    else:
        total += nota
        i += 1

total = total / 2

print(f"media = {total}")