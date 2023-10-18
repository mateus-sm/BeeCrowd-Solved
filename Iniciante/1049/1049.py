classificacao = input().lower()
if classificacao == 'vertebrado':
    caracteristica = input().lower()
    if caracteristica == 'ave':
        alimentacao = input().lower()
        if alimentacao == 'carnivoro':
            print("aguia")
        else:
            print("pomba")
    else:
        alimentacao = input().lower()
        if alimentacao == 'onivoro':
            print("homem")
        else:
            print("vaca")
else:
    caracteristica = input().lower()
    if caracteristica == 'inseto':
        alimentacao = input().lower()
        if alimentacao == 'hematofago':
            print("pulga")
        else:
            print("lagarta")
    else:
        alimentacao = input().lower()
        if alimentacao == 'hematofago':
            print("sanguessuga")
        else:
            print("minhoca")        