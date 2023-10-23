total = 1

while total != 0:
    mult, xp = map(int, input().split())

    if mult == 0 and xp == 0:
        break
    else:
        total = mult * xp
        print(total)