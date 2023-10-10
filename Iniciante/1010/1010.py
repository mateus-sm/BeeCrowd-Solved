input_str = input()
c1, n1, v1 = input_str.split()
c1 = int(c1)
n1 = int(n1)
v1 = float(v1)

input_str = input()
c2, n2, v2 = input_str.split()
c2 = int(c2)
n2 = int(n2)
v2 = float(v2)

total = n1 * v1 + n2 * v2

print("VALOR A PAGAR: R$ %.2lf" %total)
