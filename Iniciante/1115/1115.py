x = 1
y = 1

while x != 0 and y != 0:
    x, y = input().split()
    x = int(x)
    y = int(y)

    if x > 0 and y > 0:
        print("primeiro")
    if x > 0 and y < 0:
        print("quarto")
    if x < 0 and y < 0:
        print("terceiro")
    if x < 0 and y > 0:
        print("segundo")