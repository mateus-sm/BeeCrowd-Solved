abas, acoes = map(int, input().split())

for i in range(acoes):
    char = input()

    if char == 'f':
        abas += 1
    else:
        abas -= 1

print(abas)