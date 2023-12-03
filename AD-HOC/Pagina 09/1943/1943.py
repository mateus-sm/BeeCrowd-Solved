top = int(input())

if top > 50:
    print("Top 100")
elif top > 25:
    print("Top 50")
elif top > 10:
    print("Top 25")
elif top > 5:
    print("Top 10")
elif top > 3:
    print("Top 5")
elif top > 1:
    print("Top 3")
elif top == 1:
    print("Top 1")