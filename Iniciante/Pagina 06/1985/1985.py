total = 0

casos = int(input())

for i in range(casos):
    prod, qnt = map(int, input().split())

    if prod == 1001:
        total += 1.50 * qnt
    elif prod == 1002:
        total += 2.50 * qnt
    elif prod == 1003:
        total += 3.50 * qnt
    elif prod == 1004:
        total += 4.50 * qnt
    elif prod == 1005:
        total += 5.50 * qnt

print("%.2lf" %total)
