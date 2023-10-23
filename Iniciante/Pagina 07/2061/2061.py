abas, acoes = map(int, input().split())

for i in range(acoes):
    str = input()

    if str == 'fechou':
        abas += 1
    else:
        abas -= 1

print(abas)