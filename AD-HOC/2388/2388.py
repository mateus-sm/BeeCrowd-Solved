casos = int(input())
total = 0

for i in range(casos):
    a, b = map(int, input().split())
    total += a * b

print(total)