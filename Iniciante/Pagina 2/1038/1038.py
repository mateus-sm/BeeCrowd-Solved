c1 = 4.00
c2 = 4.50
c3 = 5.00
c4 = 2.00
c5 = 1.50

int_str = input()
cas, multi = int_str.split()

cas = int(cas)
multi = int(multi)

if cas == 1:
    total = c1 * multi
elif cas == 2:
    total = c2 * multi
elif cas == 3:
    total = c3 * multi
elif cas == 4:
    total = c4 * multi
elif cas == 5:
    total = c5 * multi

print("Total: R$ %.2f" %total)
