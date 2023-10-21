casos = int(input())

for i in range(casos):
    a, b, c = map(float, input().split())
    media = (a * 2 + b * 3 + c * 5) / 10 
    print("%.1f" %media)