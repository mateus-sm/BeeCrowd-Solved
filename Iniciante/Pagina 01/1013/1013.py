float_str = input()
a, b, c = float_str.split()
a = float(a)
b = float(b)
c = float(c)

maiorAB = ((a + b + abs(a - b)) / 2)

if maiorAB > c:
    print("%d eh o maior" %maiorAB)
else:
    print("%d eh o maior" %c)
