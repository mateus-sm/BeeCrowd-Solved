casos = int(input())

for i in range(casos):
    val1, val2 = map(int, input().split())
    if val2 == 0:
        print("divisao impossivel")
    else:
        print(val1 / val2)
