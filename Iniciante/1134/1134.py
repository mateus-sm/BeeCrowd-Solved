condicional = int(input())
alcool = 0
gasolina = 0
diesel = 0

while condicional != 4:

    if condicional == 1:
        alcool += 1
    elif condicional == 2:
        gasolina += 1
    elif condicional == 3:
        diesel += 1

    condicional = int(input())

print("MUITO OBRIGADO")
print("Alcool: %d" %alcool)
print("Gasolina: %d" %gasolina)
print("Diesel: %d" %diesel)